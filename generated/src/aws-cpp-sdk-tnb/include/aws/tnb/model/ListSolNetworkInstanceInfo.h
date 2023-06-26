/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/model/ListSolNetworkInstanceMetadata.h>
#include <aws/tnb/model/NsState.h>
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
   * <p>Info about the specific network instance.</p> <p>A network instance is a
   * single network created in Amazon Web Services TNB that can be deployed and on
   * which life-cycle operations (like terminate, update, and delete) can be
   * performed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/ListSolNetworkInstanceInfo">AWS
   * API Reference</a></p>
   */
  class ListSolNetworkInstanceInfo
  {
  public:
    AWS_TNB_API ListSolNetworkInstanceInfo();
    AWS_TNB_API ListSolNetworkInstanceInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API ListSolNetworkInstanceInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Network instance ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Network instance ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>Network instance ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Network instance ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>Network instance ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>Network instance ARN.</p>
     */
    inline ListSolNetworkInstanceInfo& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Network instance ARN.</p>
     */
    inline ListSolNetworkInstanceInfo& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Network instance ARN.</p>
     */
    inline ListSolNetworkInstanceInfo& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>ID of the network instance.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>ID of the network instance.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>ID of the network instance.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>ID of the network instance.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>ID of the network instance.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>ID of the network instance.</p>
     */
    inline ListSolNetworkInstanceInfo& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>ID of the network instance.</p>
     */
    inline ListSolNetworkInstanceInfo& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>ID of the network instance.</p>
     */
    inline ListSolNetworkInstanceInfo& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The metadata of the network instance.</p>
     */
    inline const ListSolNetworkInstanceMetadata& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The metadata of the network instance.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>The metadata of the network instance.</p>
     */
    inline void SetMetadata(const ListSolNetworkInstanceMetadata& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The metadata of the network instance.</p>
     */
    inline void SetMetadata(ListSolNetworkInstanceMetadata&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>The metadata of the network instance.</p>
     */
    inline ListSolNetworkInstanceInfo& WithMetadata(const ListSolNetworkInstanceMetadata& value) { SetMetadata(value); return *this;}

    /**
     * <p>The metadata of the network instance.</p>
     */
    inline ListSolNetworkInstanceInfo& WithMetadata(ListSolNetworkInstanceMetadata&& value) { SetMetadata(std::move(value)); return *this;}


    /**
     * <p>Human-readable description of the network instance.</p>
     */
    inline const Aws::String& GetNsInstanceDescription() const{ return m_nsInstanceDescription; }

    /**
     * <p>Human-readable description of the network instance.</p>
     */
    inline bool NsInstanceDescriptionHasBeenSet() const { return m_nsInstanceDescriptionHasBeenSet; }

    /**
     * <p>Human-readable description of the network instance.</p>
     */
    inline void SetNsInstanceDescription(const Aws::String& value) { m_nsInstanceDescriptionHasBeenSet = true; m_nsInstanceDescription = value; }

    /**
     * <p>Human-readable description of the network instance.</p>
     */
    inline void SetNsInstanceDescription(Aws::String&& value) { m_nsInstanceDescriptionHasBeenSet = true; m_nsInstanceDescription = std::move(value); }

    /**
     * <p>Human-readable description of the network instance.</p>
     */
    inline void SetNsInstanceDescription(const char* value) { m_nsInstanceDescriptionHasBeenSet = true; m_nsInstanceDescription.assign(value); }

    /**
     * <p>Human-readable description of the network instance.</p>
     */
    inline ListSolNetworkInstanceInfo& WithNsInstanceDescription(const Aws::String& value) { SetNsInstanceDescription(value); return *this;}

    /**
     * <p>Human-readable description of the network instance.</p>
     */
    inline ListSolNetworkInstanceInfo& WithNsInstanceDescription(Aws::String&& value) { SetNsInstanceDescription(std::move(value)); return *this;}

    /**
     * <p>Human-readable description of the network instance.</p>
     */
    inline ListSolNetworkInstanceInfo& WithNsInstanceDescription(const char* value) { SetNsInstanceDescription(value); return *this;}


    /**
     * <p>Human-readable name of the network instance.</p>
     */
    inline const Aws::String& GetNsInstanceName() const{ return m_nsInstanceName; }

    /**
     * <p>Human-readable name of the network instance.</p>
     */
    inline bool NsInstanceNameHasBeenSet() const { return m_nsInstanceNameHasBeenSet; }

    /**
     * <p>Human-readable name of the network instance.</p>
     */
    inline void SetNsInstanceName(const Aws::String& value) { m_nsInstanceNameHasBeenSet = true; m_nsInstanceName = value; }

    /**
     * <p>Human-readable name of the network instance.</p>
     */
    inline void SetNsInstanceName(Aws::String&& value) { m_nsInstanceNameHasBeenSet = true; m_nsInstanceName = std::move(value); }

    /**
     * <p>Human-readable name of the network instance.</p>
     */
    inline void SetNsInstanceName(const char* value) { m_nsInstanceNameHasBeenSet = true; m_nsInstanceName.assign(value); }

    /**
     * <p>Human-readable name of the network instance.</p>
     */
    inline ListSolNetworkInstanceInfo& WithNsInstanceName(const Aws::String& value) { SetNsInstanceName(value); return *this;}

    /**
     * <p>Human-readable name of the network instance.</p>
     */
    inline ListSolNetworkInstanceInfo& WithNsInstanceName(Aws::String&& value) { SetNsInstanceName(std::move(value)); return *this;}

    /**
     * <p>Human-readable name of the network instance.</p>
     */
    inline ListSolNetworkInstanceInfo& WithNsInstanceName(const char* value) { SetNsInstanceName(value); return *this;}


    /**
     * <p>The state of the network instance.</p>
     */
    inline const NsState& GetNsState() const{ return m_nsState; }

    /**
     * <p>The state of the network instance.</p>
     */
    inline bool NsStateHasBeenSet() const { return m_nsStateHasBeenSet; }

    /**
     * <p>The state of the network instance.</p>
     */
    inline void SetNsState(const NsState& value) { m_nsStateHasBeenSet = true; m_nsState = value; }

    /**
     * <p>The state of the network instance.</p>
     */
    inline void SetNsState(NsState&& value) { m_nsStateHasBeenSet = true; m_nsState = std::move(value); }

    /**
     * <p>The state of the network instance.</p>
     */
    inline ListSolNetworkInstanceInfo& WithNsState(const NsState& value) { SetNsState(value); return *this;}

    /**
     * <p>The state of the network instance.</p>
     */
    inline ListSolNetworkInstanceInfo& WithNsState(NsState&& value) { SetNsState(std::move(value)); return *this;}


    /**
     * <p>ID of the network service descriptor in the network package.</p>
     */
    inline const Aws::String& GetNsdId() const{ return m_nsdId; }

    /**
     * <p>ID of the network service descriptor in the network package.</p>
     */
    inline bool NsdIdHasBeenSet() const { return m_nsdIdHasBeenSet; }

    /**
     * <p>ID of the network service descriptor in the network package.</p>
     */
    inline void SetNsdId(const Aws::String& value) { m_nsdIdHasBeenSet = true; m_nsdId = value; }

    /**
     * <p>ID of the network service descriptor in the network package.</p>
     */
    inline void SetNsdId(Aws::String&& value) { m_nsdIdHasBeenSet = true; m_nsdId = std::move(value); }

    /**
     * <p>ID of the network service descriptor in the network package.</p>
     */
    inline void SetNsdId(const char* value) { m_nsdIdHasBeenSet = true; m_nsdId.assign(value); }

    /**
     * <p>ID of the network service descriptor in the network package.</p>
     */
    inline ListSolNetworkInstanceInfo& WithNsdId(const Aws::String& value) { SetNsdId(value); return *this;}

    /**
     * <p>ID of the network service descriptor in the network package.</p>
     */
    inline ListSolNetworkInstanceInfo& WithNsdId(Aws::String&& value) { SetNsdId(std::move(value)); return *this;}

    /**
     * <p>ID of the network service descriptor in the network package.</p>
     */
    inline ListSolNetworkInstanceInfo& WithNsdId(const char* value) { SetNsdId(value); return *this;}


    /**
     * <p>ID of the network service descriptor in the network package.</p>
     */
    inline const Aws::String& GetNsdInfoId() const{ return m_nsdInfoId; }

    /**
     * <p>ID of the network service descriptor in the network package.</p>
     */
    inline bool NsdInfoIdHasBeenSet() const { return m_nsdInfoIdHasBeenSet; }

    /**
     * <p>ID of the network service descriptor in the network package.</p>
     */
    inline void SetNsdInfoId(const Aws::String& value) { m_nsdInfoIdHasBeenSet = true; m_nsdInfoId = value; }

    /**
     * <p>ID of the network service descriptor in the network package.</p>
     */
    inline void SetNsdInfoId(Aws::String&& value) { m_nsdInfoIdHasBeenSet = true; m_nsdInfoId = std::move(value); }

    /**
     * <p>ID of the network service descriptor in the network package.</p>
     */
    inline void SetNsdInfoId(const char* value) { m_nsdInfoIdHasBeenSet = true; m_nsdInfoId.assign(value); }

    /**
     * <p>ID of the network service descriptor in the network package.</p>
     */
    inline ListSolNetworkInstanceInfo& WithNsdInfoId(const Aws::String& value) { SetNsdInfoId(value); return *this;}

    /**
     * <p>ID of the network service descriptor in the network package.</p>
     */
    inline ListSolNetworkInstanceInfo& WithNsdInfoId(Aws::String&& value) { SetNsdInfoId(std::move(value)); return *this;}

    /**
     * <p>ID of the network service descriptor in the network package.</p>
     */
    inline ListSolNetworkInstanceInfo& WithNsdInfoId(const char* value) { SetNsdInfoId(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ListSolNetworkInstanceMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_nsInstanceDescription;
    bool m_nsInstanceDescriptionHasBeenSet = false;

    Aws::String m_nsInstanceName;
    bool m_nsInstanceNameHasBeenSet = false;

    NsState m_nsState;
    bool m_nsStateHasBeenSet = false;

    Aws::String m_nsdId;
    bool m_nsdIdHasBeenSet = false;

    Aws::String m_nsdInfoId;
    bool m_nsdInfoIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
