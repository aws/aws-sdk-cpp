/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/tnb/TnbRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace tnb
{
namespace Model
{

  /**
   */
  class CreateSolNetworkInstanceRequest : public TnbRequest
  {
  public:
    AWS_TNB_API CreateSolNetworkInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSolNetworkInstance"; }

    AWS_TNB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Network instance description.</p>
     */
    inline const Aws::String& GetNsDescription() const { return m_nsDescription; }
    inline bool NsDescriptionHasBeenSet() const { return m_nsDescriptionHasBeenSet; }
    template<typename NsDescriptionT = Aws::String>
    void SetNsDescription(NsDescriptionT&& value) { m_nsDescriptionHasBeenSet = true; m_nsDescription = std::forward<NsDescriptionT>(value); }
    template<typename NsDescriptionT = Aws::String>
    CreateSolNetworkInstanceRequest& WithNsDescription(NsDescriptionT&& value) { SetNsDescription(std::forward<NsDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network instance name.</p>
     */
    inline const Aws::String& GetNsName() const { return m_nsName; }
    inline bool NsNameHasBeenSet() const { return m_nsNameHasBeenSet; }
    template<typename NsNameT = Aws::String>
    void SetNsName(NsNameT&& value) { m_nsNameHasBeenSet = true; m_nsName = std::forward<NsNameT>(value); }
    template<typename NsNameT = Aws::String>
    CreateSolNetworkInstanceRequest& WithNsName(NsNameT&& value) { SetNsName(std::forward<NsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID for network service descriptor.</p>
     */
    inline const Aws::String& GetNsdInfoId() const { return m_nsdInfoId; }
    inline bool NsdInfoIdHasBeenSet() const { return m_nsdInfoIdHasBeenSet; }
    template<typename NsdInfoIdT = Aws::String>
    void SetNsdInfoId(NsdInfoIdT&& value) { m_nsdInfoIdHasBeenSet = true; m_nsdInfoId = std::forward<NsdInfoIdT>(value); }
    template<typename NsdInfoIdT = Aws::String>
    CreateSolNetworkInstanceRequest& WithNsdInfoId(NsdInfoIdT&& value) { SetNsdInfoId(std::forward<NsdInfoIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateSolNetworkInstanceRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateSolNetworkInstanceRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_nsDescription;
    bool m_nsDescriptionHasBeenSet = false;

    Aws::String m_nsName;
    bool m_nsNameHasBeenSet = false;

    Aws::String m_nsdInfoId;
    bool m_nsdInfoIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
