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
    AWS_TNB_API CreateSolNetworkInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSolNetworkInstance"; }

    AWS_TNB_API Aws::String SerializePayload() const override;


    /**
     * <p>Network instance description.</p>
     */
    inline const Aws::String& GetNsDescription() const{ return m_nsDescription; }

    /**
     * <p>Network instance description.</p>
     */
    inline bool NsDescriptionHasBeenSet() const { return m_nsDescriptionHasBeenSet; }

    /**
     * <p>Network instance description.</p>
     */
    inline void SetNsDescription(const Aws::String& value) { m_nsDescriptionHasBeenSet = true; m_nsDescription = value; }

    /**
     * <p>Network instance description.</p>
     */
    inline void SetNsDescription(Aws::String&& value) { m_nsDescriptionHasBeenSet = true; m_nsDescription = std::move(value); }

    /**
     * <p>Network instance description.</p>
     */
    inline void SetNsDescription(const char* value) { m_nsDescriptionHasBeenSet = true; m_nsDescription.assign(value); }

    /**
     * <p>Network instance description.</p>
     */
    inline CreateSolNetworkInstanceRequest& WithNsDescription(const Aws::String& value) { SetNsDescription(value); return *this;}

    /**
     * <p>Network instance description.</p>
     */
    inline CreateSolNetworkInstanceRequest& WithNsDescription(Aws::String&& value) { SetNsDescription(std::move(value)); return *this;}

    /**
     * <p>Network instance description.</p>
     */
    inline CreateSolNetworkInstanceRequest& WithNsDescription(const char* value) { SetNsDescription(value); return *this;}


    /**
     * <p>Network instance name.</p>
     */
    inline const Aws::String& GetNsName() const{ return m_nsName; }

    /**
     * <p>Network instance name.</p>
     */
    inline bool NsNameHasBeenSet() const { return m_nsNameHasBeenSet; }

    /**
     * <p>Network instance name.</p>
     */
    inline void SetNsName(const Aws::String& value) { m_nsNameHasBeenSet = true; m_nsName = value; }

    /**
     * <p>Network instance name.</p>
     */
    inline void SetNsName(Aws::String&& value) { m_nsNameHasBeenSet = true; m_nsName = std::move(value); }

    /**
     * <p>Network instance name.</p>
     */
    inline void SetNsName(const char* value) { m_nsNameHasBeenSet = true; m_nsName.assign(value); }

    /**
     * <p>Network instance name.</p>
     */
    inline CreateSolNetworkInstanceRequest& WithNsName(const Aws::String& value) { SetNsName(value); return *this;}

    /**
     * <p>Network instance name.</p>
     */
    inline CreateSolNetworkInstanceRequest& WithNsName(Aws::String&& value) { SetNsName(std::move(value)); return *this;}

    /**
     * <p>Network instance name.</p>
     */
    inline CreateSolNetworkInstanceRequest& WithNsName(const char* value) { SetNsName(value); return *this;}


    /**
     * <p>ID for network service descriptor.</p>
     */
    inline const Aws::String& GetNsdInfoId() const{ return m_nsdInfoId; }

    /**
     * <p>ID for network service descriptor.</p>
     */
    inline bool NsdInfoIdHasBeenSet() const { return m_nsdInfoIdHasBeenSet; }

    /**
     * <p>ID for network service descriptor.</p>
     */
    inline void SetNsdInfoId(const Aws::String& value) { m_nsdInfoIdHasBeenSet = true; m_nsdInfoId = value; }

    /**
     * <p>ID for network service descriptor.</p>
     */
    inline void SetNsdInfoId(Aws::String&& value) { m_nsdInfoIdHasBeenSet = true; m_nsdInfoId = std::move(value); }

    /**
     * <p>ID for network service descriptor.</p>
     */
    inline void SetNsdInfoId(const char* value) { m_nsdInfoIdHasBeenSet = true; m_nsdInfoId.assign(value); }

    /**
     * <p>ID for network service descriptor.</p>
     */
    inline CreateSolNetworkInstanceRequest& WithNsdInfoId(const Aws::String& value) { SetNsdInfoId(value); return *this;}

    /**
     * <p>ID for network service descriptor.</p>
     */
    inline CreateSolNetworkInstanceRequest& WithNsdInfoId(Aws::String&& value) { SetNsdInfoId(std::move(value)); return *this;}

    /**
     * <p>ID for network service descriptor.</p>
     */
    inline CreateSolNetworkInstanceRequest& WithNsdInfoId(const char* value) { SetNsdInfoId(value); return *this;}


    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline CreateSolNetworkInstanceRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline CreateSolNetworkInstanceRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline CreateSolNetworkInstanceRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline CreateSolNetworkInstanceRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline CreateSolNetworkInstanceRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline CreateSolNetworkInstanceRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline CreateSolNetworkInstanceRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline CreateSolNetworkInstanceRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline CreateSolNetworkInstanceRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

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
