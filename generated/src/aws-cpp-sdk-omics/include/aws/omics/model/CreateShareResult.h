/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ShareStatus.h>
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
  class CreateShareResult
  {
  public:
    AWS_OMICS_API CreateShareResult() = default;
    AWS_OMICS_API CreateShareResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API CreateShareResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID that HealthOmics generates for the share.</p>
     */
    inline const Aws::String& GetShareId() const { return m_shareId; }
    template<typename ShareIdT = Aws::String>
    void SetShareId(ShareIdT&& value) { m_shareIdHasBeenSet = true; m_shareId = std::forward<ShareIdT>(value); }
    template<typename ShareIdT = Aws::String>
    CreateShareResult& WithShareId(ShareIdT&& value) { SetShareId(std::forward<ShareIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the share.</p>
     */
    inline ShareStatus GetStatus() const { return m_status; }
    inline void SetStatus(ShareStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateShareResult& WithStatus(ShareStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the share.</p>
     */
    inline const Aws::String& GetShareName() const { return m_shareName; }
    template<typename ShareNameT = Aws::String>
    void SetShareName(ShareNameT&& value) { m_shareNameHasBeenSet = true; m_shareName = std::forward<ShareNameT>(value); }
    template<typename ShareNameT = Aws::String>
    CreateShareResult& WithShareName(ShareNameT&& value) { SetShareName(std::forward<ShareNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateShareResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_shareId;
    bool m_shareIdHasBeenSet = false;

    ShareStatus m_status{ShareStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_shareName;
    bool m_shareNameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
