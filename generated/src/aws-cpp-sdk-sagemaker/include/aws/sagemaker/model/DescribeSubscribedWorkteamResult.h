/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/SubscribedWorkteam.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SageMaker
{
namespace Model
{
  class DescribeSubscribedWorkteamResult
  {
  public:
    AWS_SAGEMAKER_API DescribeSubscribedWorkteamResult();
    AWS_SAGEMAKER_API DescribeSubscribedWorkteamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeSubscribedWorkteamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <code>Workteam</code> instance that contains information about the work
     * team.</p>
     */
    inline const SubscribedWorkteam& GetSubscribedWorkteam() const{ return m_subscribedWorkteam; }

    /**
     * <p>A <code>Workteam</code> instance that contains information about the work
     * team.</p>
     */
    inline void SetSubscribedWorkteam(const SubscribedWorkteam& value) { m_subscribedWorkteam = value; }

    /**
     * <p>A <code>Workteam</code> instance that contains information about the work
     * team.</p>
     */
    inline void SetSubscribedWorkteam(SubscribedWorkteam&& value) { m_subscribedWorkteam = std::move(value); }

    /**
     * <p>A <code>Workteam</code> instance that contains information about the work
     * team.</p>
     */
    inline DescribeSubscribedWorkteamResult& WithSubscribedWorkteam(const SubscribedWorkteam& value) { SetSubscribedWorkteam(value); return *this;}

    /**
     * <p>A <code>Workteam</code> instance that contains information about the work
     * team.</p>
     */
    inline DescribeSubscribedWorkteamResult& WithSubscribedWorkteam(SubscribedWorkteam&& value) { SetSubscribedWorkteam(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeSubscribedWorkteamResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeSubscribedWorkteamResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeSubscribedWorkteamResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SubscribedWorkteam m_subscribedWorkteam;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
