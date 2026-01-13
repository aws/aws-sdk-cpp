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
class Paginator
{
public:
    using OutcomeType = typename OperationTraits::OutcomeType;
    using ResultType = typename OperationTraits::ResultType;

    class Iterator
    {
    public:
        using iterator_category = std::input_iterator_tag;
        using value_type = OutcomeType;
        using difference_type = std::ptrdiff_t;
        using pointer = const OutcomeType*;
        using reference = const OutcomeType&;

    Iterator(ServiceClient* client, const OperationRequest& firstReq)
        : m_client(client), m_request(firstReq), m_currentOutcome{OperationTraits::Invoke(m_client, m_request)} {}

        const OutcomeType& operator*() const { return m_currentOutcome; }

        Iterator& operator++()
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
            Fetch();
            return *this;
        }

    friend bool operator==(const Iterator& lhs, const Iterator& rhs) {
      if (rhs.m_isSentinel) {
        return lhs.m_atEnd;
      }
      return false;
    }

    friend bool operator!=(const Iterator& lhs, const Iterator& rhs) { return !(lhs == rhs); }
    static Iterator constructSentinel() {return Iterator{};}

   private:
    Iterator() : m_isSentinel{true} {};

    void Fetch() { m_currentOutcome = OperationTraits::Invoke(m_client, m_request); }


    ServiceClient* m_client;
    OperationRequest m_request{};
    OutcomeType m_currentOutcome{};
    bool m_atEnd{false};
    bool m_isSentinel{false};
  };

  Paginator(ServiceClient* client, const OperationRequest& firstReq) : m_client(client), m_firstRequest(firstReq) {}

  Iterator begin() const { return Iterator(m_client, m_firstRequest); }
  Iterator end() const { return Iterator::constructSentinel(); }

 private:
  ServiceClient* m_client;
  OperationRequest m_firstRequest{};
};

} // namespace Pagination
} // namespace Utils
} // namespace Aws