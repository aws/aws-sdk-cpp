/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/model/GetSolInstantiatedVnfInfo.h>
#include <aws/tnb/model/VnfInstantiationState.h>
#include <aws/tnb/model/ListSolFunctionInstanceMetadata.h>
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
   * <p>Lists information about a network function instance.</p> <p>A network
   * function instance is a function in a function package .</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/ListSolFunctionInstanceInfo">AWS
   * API Reference</a></p>
   */
  class ListSolFunctionInstanceInfo
  {
  public:
    AWS_TNB_API ListSolFunctionInstanceInfo();
    AWS_TNB_API ListSolFunctionInstanceInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API ListSolFunctionInstanceInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Network function instance ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ListSolFunctionInstanceInfo& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ListSolFunctionInstanceInfo& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ListSolFunctionInstanceInfo& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network function instance ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ListSolFunctionInstanceInfo& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ListSolFunctionInstanceInfo& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ListSolFunctionInstanceInfo& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    
    inline const GetSolInstantiatedVnfInfo& GetInstantiatedVnfInfo() const{ return m_instantiatedVnfInfo; }
    inline bool InstantiatedVnfInfoHasBeenSet() const { return m_instantiatedVnfInfoHasBeenSet; }
    inline void SetInstantiatedVnfInfo(const GetSolInstantiatedVnfInfo& value) { m_instantiatedVnfInfoHasBeenSet = true; m_instantiatedVnfInfo = value; }
    inline void SetInstantiatedVnfInfo(GetSolInstantiatedVnfInfo&& value) { m_instantiatedVnfInfoHasBeenSet = true; m_instantiatedVnfInfo = std::move(value); }
    inline ListSolFunctionInstanceInfo& WithInstantiatedVnfInfo(const GetSolInstantiatedVnfInfo& value) { SetInstantiatedVnfInfo(value); return *this;}
    inline ListSolFunctionInstanceInfo& WithInstantiatedVnfInfo(GetSolInstantiatedVnfInfo&& value) { SetInstantiatedVnfInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network function instance instantiation state.</p>
     */
    inline const VnfInstantiationState& GetInstantiationState() const{ return m_instantiationState; }
    inline bool InstantiationStateHasBeenSet() const { return m_instantiationStateHasBeenSet; }
    inline void SetInstantiationState(const VnfInstantiationState& value) { m_instantiationStateHasBeenSet = true; m_instantiationState = value; }
    inline void SetInstantiationState(VnfInstantiationState&& value) { m_instantiationStateHasBeenSet = true; m_instantiationState = std::move(value); }
    inline ListSolFunctionInstanceInfo& WithInstantiationState(const VnfInstantiationState& value) { SetInstantiationState(value); return *this;}
    inline ListSolFunctionInstanceInfo& WithInstantiationState(VnfInstantiationState&& value) { SetInstantiationState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network function instance metadata.</p>
     */
    inline const ListSolFunctionInstanceMetadata& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const ListSolFunctionInstanceMetadata& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(ListSolFunctionInstanceMetadata&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline ListSolFunctionInstanceInfo& WithMetadata(const ListSolFunctionInstanceMetadata& value) { SetMetadata(value); return *this;}
    inline ListSolFunctionInstanceInfo& WithMetadata(ListSolFunctionInstanceMetadata&& value) { SetMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network instance ID.</p>
     */
    inline const Aws::String& GetNsInstanceId() const{ return m_nsInstanceId; }
    inline bool NsInstanceIdHasBeenSet() const { return m_nsInstanceIdHasBeenSet; }
    inline void SetNsInstanceId(const Aws::String& value) { m_nsInstanceIdHasBeenSet = true; m_nsInstanceId = value; }
    inline void SetNsInstanceId(Aws::String&& value) { m_nsInstanceIdHasBeenSet = true; m_nsInstanceId = std::move(value); }
    inline void SetNsInstanceId(const char* value) { m_nsInstanceIdHasBeenSet = true; m_nsInstanceId.assign(value); }
    inline ListSolFunctionInstanceInfo& WithNsInstanceId(const Aws::String& value) { SetNsInstanceId(value); return *this;}
    inline ListSolFunctionInstanceInfo& WithNsInstanceId(Aws::String&& value) { SetNsInstanceId(std::move(value)); return *this;}
    inline ListSolFunctionInstanceInfo& WithNsInstanceId(const char* value) { SetNsInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Function package ID.</p>
     */
    inline const Aws::String& GetVnfPkgId() const{ return m_vnfPkgId; }
    inline bool VnfPkgIdHasBeenSet() const { return m_vnfPkgIdHasBeenSet; }
    inline void SetVnfPkgId(const Aws::String& value) { m_vnfPkgIdHasBeenSet = true; m_vnfPkgId = value; }
    inline void SetVnfPkgId(Aws::String&& value) { m_vnfPkgIdHasBeenSet = true; m_vnfPkgId = std::move(value); }
    inline void SetVnfPkgId(const char* value) { m_vnfPkgIdHasBeenSet = true; m_vnfPkgId.assign(value); }
    inline ListSolFunctionInstanceInfo& WithVnfPkgId(const Aws::String& value) { SetVnfPkgId(value); return *this;}
    inline ListSolFunctionInstanceInfo& WithVnfPkgId(Aws::String&& value) { SetVnfPkgId(std::move(value)); return *this;}
    inline ListSolFunctionInstanceInfo& WithVnfPkgId(const char* value) { SetVnfPkgId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Function package name.</p>
     */
    inline const Aws::String& GetVnfPkgName() const{ return m_vnfPkgName; }
    inline bool VnfPkgNameHasBeenSet() const { return m_vnfPkgNameHasBeenSet; }
    inline void SetVnfPkgName(const Aws::String& value) { m_vnfPkgNameHasBeenSet = true; m_vnfPkgName = value; }
    inline void SetVnfPkgName(Aws::String&& value) { m_vnfPkgNameHasBeenSet = true; m_vnfPkgName = std::move(value); }
    inline void SetVnfPkgName(const char* value) { m_vnfPkgNameHasBeenSet = true; m_vnfPkgName.assign(value); }
    inline ListSolFunctionInstanceInfo& WithVnfPkgName(const Aws::String& value) { SetVnfPkgName(value); return *this;}
    inline ListSolFunctionInstanceInfo& WithVnfPkgName(Aws::String&& value) { SetVnfPkgName(std::move(value)); return *this;}
    inline ListSolFunctionInstanceInfo& WithVnfPkgName(const char* value) { SetVnfPkgName(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    GetSolInstantiatedVnfInfo m_instantiatedVnfInfo;
    bool m_instantiatedVnfInfoHasBeenSet = false;

    VnfInstantiationState m_instantiationState;
    bool m_instantiationStateHasBeenSet = false;

    ListSolFunctionInstanceMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_nsInstanceId;
    bool m_nsInstanceIdHasBeenSet = false;

    Aws::String m_vnfPkgId;
    bool m_vnfPkgIdHasBeenSet = false;

    Aws::String m_vnfPkgName;
    bool m_vnfPkgNameHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
