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
  class UpdateBrandPublishedVersionResult
  {
  public:
    AWS_QUICKSIGHT_API UpdateBrandPublishedVersionResult();
    AWS_QUICKSIGHT_API UpdateBrandPublishedVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API UpdateBrandPublishedVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateBrandPublishedVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateBrandPublishedVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateBrandPublishedVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the published version.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }
    inline void SetVersionId(const Aws::String& value) { m_versionId = value; }
    inline void SetVersionId(Aws::String&& value) { m_versionId = std::move(value); }
    inline void SetVersionId(const char* value) { m_versionId.assign(value); }
    inline UpdateBrandPublishedVersionResult& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}
    inline UpdateBrandPublishedVersionResult& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}
    inline UpdateBrandPublishedVersionResult& WithVersionId(const char* value) { SetVersionId(value); return *this;}
    ///@}
  private:

    Aws::String m_requestId;

    Aws::String m_versionId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
