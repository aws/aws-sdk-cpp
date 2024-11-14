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
  class UpdateBrandAssignmentResult
  {
  public:
    AWS_QUICKSIGHT_API UpdateBrandAssignmentResult();
    AWS_QUICKSIGHT_API UpdateBrandAssignmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API UpdateBrandAssignmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateBrandAssignmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateBrandAssignmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateBrandAssignmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the brand.</p>
     */
    inline const Aws::String& GetBrandArn() const{ return m_brandArn; }
    inline void SetBrandArn(const Aws::String& value) { m_brandArn = value; }
    inline void SetBrandArn(Aws::String&& value) { m_brandArn = std::move(value); }
    inline void SetBrandArn(const char* value) { m_brandArn.assign(value); }
    inline UpdateBrandAssignmentResult& WithBrandArn(const Aws::String& value) { SetBrandArn(value); return *this;}
    inline UpdateBrandAssignmentResult& WithBrandArn(Aws::String&& value) { SetBrandArn(std::move(value)); return *this;}
    inline UpdateBrandAssignmentResult& WithBrandArn(const char* value) { SetBrandArn(value); return *this;}
    ///@}
  private:

    Aws::String m_requestId;

    Aws::String m_brandArn;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
