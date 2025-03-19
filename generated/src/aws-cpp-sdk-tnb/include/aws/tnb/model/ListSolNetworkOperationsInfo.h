/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/model/ProblemDetails.h>
#include <aws/tnb/model/LcmOperationType.h>
#include <aws/tnb/model/ListSolNetworkOperationsMetadata.h>
#include <aws/tnb/model/NsLcmOperationState.h>
#include <aws/tnb/model/UpdateSolNetworkType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace tnb
{
namespace Model
{

  /**
   * <p>Information parameters for a network operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/ListSolNetworkOperationsInfo">AWS
   * API Reference</a></p>
   */
  class ListSolNetworkOperationsInfo
  {
  public:
    AWS_TNB_API ListSolNetworkOperationsInfo() = default;
    AWS_TNB_API ListSolNetworkOperationsInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API ListSolNetworkOperationsInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Network operation ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ListSolNetworkOperationsInfo& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error related to this specific network operation.</p>
     */
    inline const ProblemDetails& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = ProblemDetails>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = ProblemDetails>
    ListSolNetworkOperationsInfo& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of this network operation.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ListSolNetworkOperationsInfo& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of lifecycle management network operation.</p>
     */
    inline LcmOperationType GetLcmOperationType() const { return m_lcmOperationType; }
    inline bool LcmOperationTypeHasBeenSet() const { return m_lcmOperationTypeHasBeenSet; }
    inline void SetLcmOperationType(LcmOperationType value) { m_lcmOperationTypeHasBeenSet = true; m_lcmOperationType = value; }
    inline ListSolNetworkOperationsInfo& WithLcmOperationType(LcmOperationType value) { SetLcmOperationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata related to this network operation.</p>
     */
    inline const ListSolNetworkOperationsMetadata& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = ListSolNetworkOperationsMetadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = ListSolNetworkOperationsMetadata>
    ListSolNetworkOperationsInfo& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the network instance related to this operation.</p>
     */
    inline const Aws::String& GetNsInstanceId() const { return m_nsInstanceId; }
    inline bool NsInstanceIdHasBeenSet() const { return m_nsInstanceIdHasBeenSet; }
    template<typename NsInstanceIdT = Aws::String>
    void SetNsInstanceId(NsInstanceIdT&& value) { m_nsInstanceIdHasBeenSet = true; m_nsInstanceId = std::forward<NsInstanceIdT>(value); }
    template<typename NsInstanceIdT = Aws::String>
    ListSolNetworkOperationsInfo& WithNsInstanceId(NsInstanceIdT&& value) { SetNsInstanceId(std::forward<NsInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the network operation.</p>
     */
    inline NsLcmOperationState GetOperationState() const { return m_operationState; }
    inline bool OperationStateHasBeenSet() const { return m_operationStateHasBeenSet; }
    inline void SetOperationState(NsLcmOperationState value) { m_operationStateHasBeenSet = true; m_operationState = value; }
    inline ListSolNetworkOperationsInfo& WithOperationState(NsLcmOperationState value) { SetOperationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of the update. Only present if the network operation lcmOperationType is
     * <code>UPDATE</code>.</p>
     */
    inline UpdateSolNetworkType GetUpdateType() const { return m_updateType; }
    inline bool UpdateTypeHasBeenSet() const { return m_updateTypeHasBeenSet; }
    inline void SetUpdateType(UpdateSolNetworkType value) { m_updateTypeHasBeenSet = true; m_updateType = value; }
    inline ListSolNetworkOperationsInfo& WithUpdateType(UpdateSolNetworkType value) { SetUpdateType(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ProblemDetails m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    LcmOperationType m_lcmOperationType{LcmOperationType::NOT_SET};
    bool m_lcmOperationTypeHasBeenSet = false;

    ListSolNetworkOperationsMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_nsInstanceId;
    bool m_nsInstanceIdHasBeenSet = false;

    NsLcmOperationState m_operationState{NsLcmOperationState::NOT_SET};
    bool m_operationStateHasBeenSet = false;

    UpdateSolNetworkType m_updateType{UpdateSolNetworkType::NOT_SET};
    bool m_updateTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
