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
private:
  struct EndSentinel {};
public:
    using OutcomeType = typename OperationTraits::OutcomeType;
    using ResultType = typename OperationTraits::ResultType;

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
              m_currentOutcome{OperationTraits::Invoke(*m_client, m_request)}
        {}

        const OutcomeType& operator*() const { return m_currentOutcome; }

        PageIterator& operator++()
        {
            if (m_atEnd) return *this;

            if (!m_currentOutcome.IsSuccess())
            {
                m_atEnd = true;
                return *this;
            }

            if (!OperationTraits::HasMoreResults(m_currentOutcome.GetResult()))
            {
                m_atEnd = true;
                return *this;
            }

            OperationTraits::SetNextRequest(m_currentOutcome.GetResult(), m_request);
            FetchPage();

            return *this;
        }

        friend bool operator==(const PageIterator& lhs, const EndSentinel&) {
          return lhs.m_atEnd;
        }

        friend bool operator!=(const PageIterator& lhs, const EndSentinel& rhs) {
          return !(lhs == rhs);
        }

       private:
        void FetchPage()
        {
            m_currentOutcome = OperationTraits::Invoke(*m_client, m_request);
        }

        std::shared_ptr<ServiceClient> m_client;
        OperationRequest m_request{};
        OutcomeType m_currentOutcome{};
        bool m_atEnd{false};
    };

    PagePaginator(std::shared_ptr<ServiceClient> client, const OperationRequest& firstReq)
        : m_client(client),
          m_firstRequest(firstReq) {}

    PageIterator begin() const { return PageIterator(m_client, m_firstRequest); }
    EndSentinel end() const { return EndSentinel{}; }

private:
    std::shared_ptr<ServiceClient> m_client;
    OperationRequest m_firstRequest{};
};

} // namespace Pagination
} // namespace Utils
} // namespace Aws