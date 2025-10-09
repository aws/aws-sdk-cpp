/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ResourceStatus.h>
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
  class CreateActionConnectorResult
  {
  public:
    AWS_QUICKSIGHT_API CreateActionConnectorResult() = default;
    AWS_QUICKSIGHT_API CreateActionConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API CreateActionConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the created action connector.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CreateActionConnectorResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation status of the action connector.</p>
     */
    inline ResourceStatus GetCreationStatus() const { return m_creationStatus; }
    inline void SetCreationStatus(ResourceStatus value) { m_creationStatusHasBeenSet = true; m_creationStatus = value; }
    inline CreateActionConnectorResult& WithCreationStatus(ResourceStatus value) { SetCreationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the created action connector.</p>
     */
    inline const Aws::String& GetActionConnectorId() const { return m_actionConnectorId; }
    template<typename ActionConnectorIdT = Aws::String>
    void SetActionConnectorId(ActionConnectorIdT&& value) { m_actionConnectorIdHasBeenSet = true; m_actionConnectorId = std::forward<ActionConnectorIdT>(value); }
    template<typename ActionConnectorIdT = Aws::String>
    CreateActionConnectorResult& WithActionConnectorId(ActionConnectorIdT&& value) { SetActionConnectorId(std::forward<ActionConnectorIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateActionConnectorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status code of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateActionConnectorResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ResourceStatus m_creationStatus{ResourceStatus::NOT_SET};
    bool m_creationStatusHasBeenSet = false;

    Aws::String m_actionConnectorId;
    bool m_actionConnectorIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
