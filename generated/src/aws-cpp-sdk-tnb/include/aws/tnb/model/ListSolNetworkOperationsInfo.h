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
    AWS_TNB_API ListSolNetworkOperationsInfo();
    AWS_TNB_API ListSolNetworkOperationsInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API ListSolNetworkOperationsInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Network operation ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Network operation ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>Network operation ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Network operation ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>Network operation ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>Network operation ARN.</p>
     */
    inline ListSolNetworkOperationsInfo& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Network operation ARN.</p>
     */
    inline ListSolNetworkOperationsInfo& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Network operation ARN.</p>
     */
    inline ListSolNetworkOperationsInfo& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Error related to this specific network operation.</p>
     */
    inline const ProblemDetails& GetError() const{ return m_error; }

    /**
     * <p>Error related to this specific network operation.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>Error related to this specific network operation.</p>
     */
    inline void SetError(const ProblemDetails& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>Error related to this specific network operation.</p>
     */
    inline void SetError(ProblemDetails&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>Error related to this specific network operation.</p>
     */
    inline ListSolNetworkOperationsInfo& WithError(const ProblemDetails& value) { SetError(value); return *this;}

    /**
     * <p>Error related to this specific network operation.</p>
     */
    inline ListSolNetworkOperationsInfo& WithError(ProblemDetails&& value) { SetError(std::move(value)); return *this;}


    /**
     * <p>ID of this network operation.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>ID of this network operation.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>ID of this network operation.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>ID of this network operation.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>ID of this network operation.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>ID of this network operation.</p>
     */
    inline ListSolNetworkOperationsInfo& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>ID of this network operation.</p>
     */
    inline ListSolNetworkOperationsInfo& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>ID of this network operation.</p>
     */
    inline ListSolNetworkOperationsInfo& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Type of lifecycle management network operation.</p>
     */
    inline const LcmOperationType& GetLcmOperationType() const{ return m_lcmOperationType; }

    /**
     * <p>Type of lifecycle management network operation.</p>
     */
    inline bool LcmOperationTypeHasBeenSet() const { return m_lcmOperationTypeHasBeenSet; }

    /**
     * <p>Type of lifecycle management network operation.</p>
     */
    inline void SetLcmOperationType(const LcmOperationType& value) { m_lcmOperationTypeHasBeenSet = true; m_lcmOperationType = value; }

    /**
     * <p>Type of lifecycle management network operation.</p>
     */
    inline void SetLcmOperationType(LcmOperationType&& value) { m_lcmOperationTypeHasBeenSet = true; m_lcmOperationType = std::move(value); }

    /**
     * <p>Type of lifecycle management network operation.</p>
     */
    inline ListSolNetworkOperationsInfo& WithLcmOperationType(const LcmOperationType& value) { SetLcmOperationType(value); return *this;}

    /**
     * <p>Type of lifecycle management network operation.</p>
     */
    inline ListSolNetworkOperationsInfo& WithLcmOperationType(LcmOperationType&& value) { SetLcmOperationType(std::move(value)); return *this;}


    /**
     * <p>Metadata related to this network operation.</p>
     */
    inline const ListSolNetworkOperationsMetadata& GetMetadata() const{ return m_metadata; }

    /**
     * <p>Metadata related to this network operation.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>Metadata related to this network operation.</p>
     */
    inline void SetMetadata(const ListSolNetworkOperationsMetadata& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>Metadata related to this network operation.</p>
     */
    inline void SetMetadata(ListSolNetworkOperationsMetadata&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>Metadata related to this network operation.</p>
     */
    inline ListSolNetworkOperationsInfo& WithMetadata(const ListSolNetworkOperationsMetadata& value) { SetMetadata(value); return *this;}

    /**
     * <p>Metadata related to this network operation.</p>
     */
    inline ListSolNetworkOperationsInfo& WithMetadata(ListSolNetworkOperationsMetadata&& value) { SetMetadata(std::move(value)); return *this;}


    /**
     * <p>ID of the network instance related to this operation.</p>
     */
    inline const Aws::String& GetNsInstanceId() const{ return m_nsInstanceId; }

    /**
     * <p>ID of the network instance related to this operation.</p>
     */
    inline bool NsInstanceIdHasBeenSet() const { return m_nsInstanceIdHasBeenSet; }

    /**
     * <p>ID of the network instance related to this operation.</p>
     */
    inline void SetNsInstanceId(const Aws::String& value) { m_nsInstanceIdHasBeenSet = true; m_nsInstanceId = value; }

    /**
     * <p>ID of the network instance related to this operation.</p>
     */
    inline void SetNsInstanceId(Aws::String&& value) { m_nsInstanceIdHasBeenSet = true; m_nsInstanceId = std::move(value); }

    /**
     * <p>ID of the network instance related to this operation.</p>
     */
    inline void SetNsInstanceId(const char* value) { m_nsInstanceIdHasBeenSet = true; m_nsInstanceId.assign(value); }

    /**
     * <p>ID of the network instance related to this operation.</p>
     */
    inline ListSolNetworkOperationsInfo& WithNsInstanceId(const Aws::String& value) { SetNsInstanceId(value); return *this;}

    /**
     * <p>ID of the network instance related to this operation.</p>
     */
    inline ListSolNetworkOperationsInfo& WithNsInstanceId(Aws::String&& value) { SetNsInstanceId(std::move(value)); return *this;}

    /**
     * <p>ID of the network instance related to this operation.</p>
     */
    inline ListSolNetworkOperationsInfo& WithNsInstanceId(const char* value) { SetNsInstanceId(value); return *this;}


    /**
     * <p>The state of the network operation.</p>
     */
    inline const NsLcmOperationState& GetOperationState() const{ return m_operationState; }

    /**
     * <p>The state of the network operation.</p>
     */
    inline bool OperationStateHasBeenSet() const { return m_operationStateHasBeenSet; }

    /**
     * <p>The state of the network operation.</p>
     */
    inline void SetOperationState(const NsLcmOperationState& value) { m_operationStateHasBeenSet = true; m_operationState = value; }

    /**
     * <p>The state of the network operation.</p>
     */
    inline void SetOperationState(NsLcmOperationState&& value) { m_operationStateHasBeenSet = true; m_operationState = std::move(value); }

    /**
     * <p>The state of the network operation.</p>
     */
    inline ListSolNetworkOperationsInfo& WithOperationState(const NsLcmOperationState& value) { SetOperationState(value); return *this;}

    /**
     * <p>The state of the network operation.</p>
     */
    inline ListSolNetworkOperationsInfo& WithOperationState(NsLcmOperationState&& value) { SetOperationState(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ProblemDetails m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    LcmOperationType m_lcmOperationType;
    bool m_lcmOperationTypeHasBeenSet = false;

    ListSolNetworkOperationsMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_nsInstanceId;
    bool m_nsInstanceIdHasBeenSet = false;

    NsLcmOperationState m_operationState;
    bool m_operationStateHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
