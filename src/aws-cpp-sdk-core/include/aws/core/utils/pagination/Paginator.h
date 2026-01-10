/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <iterator>
#include <cstddef>
#include <memory>

namespace Aws
{
namespace Utils
{
namespace Pagination
{

template <class ServiceClient, class OperationRequest, class OperationTraits>
class PagePaginator
{
public:
    using OutcomeType = typename OperationTraits::OutcomeType;
    using ResultType = typename OperationTraits::ResultType;

    struct EndSentinel {};

    class PageIterator
    {
    public:
        using iterator_category = std::input_iterator_tag;
        using value_type = OutcomeType;
        using difference_type = std::ptrdiff_t;
        using pointer = const OutcomeType*;
        using reference = const OutcomeType&;

        PageIterator(std::shared_ptr<ServiceClient> client, const OperationRequest& firstReq)
            : m_client(client),
              m_request(firstReq),
              m_atEnd(false)
        {
            FetchPage();
        }

        const OutcomeType& operator*() const { return m_currentOutcome; }

        PageIterator& operator++()
        {
            if (m_atEnd) return *this;

            // If last fetch failed, end iteration
            if (!m_currentOutcome.IsSuccess())
            {
                m_atEnd = true;
                return *this;
            }

            // If no more results, end iteration
            if (!OperationTraits::HasMoreResults(m_currentOutcome.GetResult()))
            {
                m_atEnd = true;
                return *this;
            }

            // Mutate iterator-owned request for next page
            OperationTraits::SetNextRequest(m_currentOutcome.GetResult(), m_request);
            FetchPage();
            
            return *this;
        }

        bool operator==(EndSentinel) const { return m_atEnd; }
        bool operator!=(EndSentinel) const { return !m_atEnd; }

    private:
        void FetchPage()
        {
            m_currentOutcome = OperationTraits::Invoke(*m_client, m_request);
        }

        std::shared_ptr<ServiceClient> m_client;
        OperationRequest m_request{};
        OutcomeType m_currentOutcome{};
        bool m_atEnd{true};
    };

    PagePaginator(std::shared_ptr<ServiceClient> client, const OperationRequest& firstReq)
        : m_client(client),
          m_firstRequest(firstReq) {}

    PageIterator begin() const { return PageIterator(m_client, m_firstRequest); }
    EndSentinel end() const { return {}; }

private:
    std::shared_ptr<ServiceClient> m_client;
    OperationRequest m_firstRequest{};
};

} // namespace Pagination
} // namespace Utils
} // namespace Aws