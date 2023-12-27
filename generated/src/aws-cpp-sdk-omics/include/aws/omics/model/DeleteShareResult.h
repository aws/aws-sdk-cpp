/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/ShareStatus.h>
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
namespace Omics
{
namespace Model
{
  class DeleteShareResult
  {
  public:
    AWS_OMICS_API DeleteShareResult();
    AWS_OMICS_API DeleteShareResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API DeleteShareResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The status of the share being deleted. </p>
     */
    inline const ShareStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The status of the share being deleted. </p>
     */
    inline void SetStatus(const ShareStatus& value) { m_status = value; }

    /**
     * <p> The status of the share being deleted. </p>
     */
    inline void SetStatus(ShareStatus&& value) { m_status = std::move(value); }

    /**
     * <p> The status of the share being deleted. </p>
     */
    inline DeleteShareResult& WithStatus(const ShareStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of the share being deleted. </p>
     */
    inline DeleteShareResult& WithStatus(ShareStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteShareResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteShareResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteShareResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ShareStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
