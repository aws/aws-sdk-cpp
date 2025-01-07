/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{
  class DescribeDefaultQBusinessApplicationResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeDefaultQBusinessApplicationResult();
    AWS_QUICKSIGHT_API DescribeDefaultQBusinessApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeDefaultQBusinessApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeDefaultQBusinessApplicationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeDefaultQBusinessApplicationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeDefaultQBusinessApplicationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline DescribeDefaultQBusinessApplicationResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Q Business application that is linked to the Amazon
     * QuickSight account.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }
    inline DescribeDefaultQBusinessApplicationResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline DescribeDefaultQBusinessApplicationResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline DescribeDefaultQBusinessApplicationResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}
  private:

    Aws::String m_requestId;

    int m_status;

    Aws::String m_applicationId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
