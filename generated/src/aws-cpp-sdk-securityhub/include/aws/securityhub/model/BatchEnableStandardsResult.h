﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/StandardsSubscription.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{
  class BatchEnableStandardsResult
  {
  public:
    AWS_SECURITYHUB_API BatchEnableStandardsResult();
    AWS_SECURITYHUB_API BatchEnableStandardsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API BatchEnableStandardsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details of the standards subscriptions that were enabled.</p>
     */
    inline const Aws::Vector<StandardsSubscription>& GetStandardsSubscriptions() const{ return m_standardsSubscriptions; }
    inline void SetStandardsSubscriptions(const Aws::Vector<StandardsSubscription>& value) { m_standardsSubscriptions = value; }
    inline void SetStandardsSubscriptions(Aws::Vector<StandardsSubscription>&& value) { m_standardsSubscriptions = std::move(value); }
    inline BatchEnableStandardsResult& WithStandardsSubscriptions(const Aws::Vector<StandardsSubscription>& value) { SetStandardsSubscriptions(value); return *this;}
    inline BatchEnableStandardsResult& WithStandardsSubscriptions(Aws::Vector<StandardsSubscription>&& value) { SetStandardsSubscriptions(std::move(value)); return *this;}
    inline BatchEnableStandardsResult& AddStandardsSubscriptions(const StandardsSubscription& value) { m_standardsSubscriptions.push_back(value); return *this; }
    inline BatchEnableStandardsResult& AddStandardsSubscriptions(StandardsSubscription&& value) { m_standardsSubscriptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchEnableStandardsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchEnableStandardsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchEnableStandardsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<StandardsSubscription> m_standardsSubscriptions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
