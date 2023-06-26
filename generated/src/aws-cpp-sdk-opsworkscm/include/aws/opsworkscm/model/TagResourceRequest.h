/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/opsworkscm/OpsWorksCMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworkscm/model/Tag.h>
#include <utility>

namespace Aws
{
namespace OpsWorksCM
{
namespace Model
{

  /**
   */
  class TagResourceRequest : public OpsWorksCMRequest
  {
  public:
    AWS_OPSWORKSCM_API TagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResource"; }

    AWS_OPSWORKSCM_API Aws::String SerializePayload() const override;

    AWS_OPSWORKSCM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Number (ARN) of a resource to which you want to apply
     * tags. For example,
     * <code>arn:aws:opsworks-cm:us-west-2:123456789012:server/test-owcm-server/EXAMPLE-66b0-4196-8274-d1a2bEXAMPLE</code>.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Number (ARN) of a resource to which you want to apply
     * tags. For example,
     * <code>arn:aws:opsworks-cm:us-west-2:123456789012:server/test-owcm-server/EXAMPLE-66b0-4196-8274-d1a2bEXAMPLE</code>.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Number (ARN) of a resource to which you want to apply
     * tags. For example,
     * <code>arn:aws:opsworks-cm:us-west-2:123456789012:server/test-owcm-server/EXAMPLE-66b0-4196-8274-d1a2bEXAMPLE</code>.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of a resource to which you want to apply
     * tags. For example,
     * <code>arn:aws:opsworks-cm:us-west-2:123456789012:server/test-owcm-server/EXAMPLE-66b0-4196-8274-d1a2bEXAMPLE</code>.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of a resource to which you want to apply
     * tags. For example,
     * <code>arn:aws:opsworks-cm:us-west-2:123456789012:server/test-owcm-server/EXAMPLE-66b0-4196-8274-d1a2bEXAMPLE</code>.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of a resource to which you want to apply
     * tags. For example,
     * <code>arn:aws:opsworks-cm:us-west-2:123456789012:server/test-owcm-server/EXAMPLE-66b0-4196-8274-d1a2bEXAMPLE</code>.</p>
     */
    inline TagResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of a resource to which you want to apply
     * tags. For example,
     * <code>arn:aws:opsworks-cm:us-west-2:123456789012:server/test-owcm-server/EXAMPLE-66b0-4196-8274-d1a2bEXAMPLE</code>.</p>
     */
    inline TagResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of a resource to which you want to apply
     * tags. For example,
     * <code>arn:aws:opsworks-cm:us-west-2:123456789012:server/test-owcm-server/EXAMPLE-66b0-4196-8274-d1a2bEXAMPLE</code>.</p>
     */
    inline TagResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>A map that contains tag keys and tag values to attach to AWS OpsWorks-CM
     * servers or backups.</p> <ul> <li> <p>The key cannot be empty.</p> </li> <li>
     * <p>The key can be a maximum of 127 characters, and can contain only Unicode
     * letters, numbers, or separators, or the following special characters: <code>+ -
     * = . _ : /</code> </p> </li> <li> <p>The value can be a maximum 255 characters,
     * and contain only Unicode letters, numbers, or separators, or the following
     * special characters: <code>+ - = . _ : /</code> </p> </li> <li> <p>Leading and
     * trailing white spaces are trimmed from both the key and value.</p> </li> <li>
     * <p>A maximum of 50 user-applied tags is allowed for any AWS OpsWorks-CM server
     * or backup.</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A map that contains tag keys and tag values to attach to AWS OpsWorks-CM
     * servers or backups.</p> <ul> <li> <p>The key cannot be empty.</p> </li> <li>
     * <p>The key can be a maximum of 127 characters, and can contain only Unicode
     * letters, numbers, or separators, or the following special characters: <code>+ -
     * = . _ : /</code> </p> </li> <li> <p>The value can be a maximum 255 characters,
     * and contain only Unicode letters, numbers, or separators, or the following
     * special characters: <code>+ - = . _ : /</code> </p> </li> <li> <p>Leading and
     * trailing white spaces are trimmed from both the key and value.</p> </li> <li>
     * <p>A maximum of 50 user-applied tags is allowed for any AWS OpsWorks-CM server
     * or backup.</p> </li> </ul>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A map that contains tag keys and tag values to attach to AWS OpsWorks-CM
     * servers or backups.</p> <ul> <li> <p>The key cannot be empty.</p> </li> <li>
     * <p>The key can be a maximum of 127 characters, and can contain only Unicode
     * letters, numbers, or separators, or the following special characters: <code>+ -
     * = . _ : /</code> </p> </li> <li> <p>The value can be a maximum 255 characters,
     * and contain only Unicode letters, numbers, or separators, or the following
     * special characters: <code>+ - = . _ : /</code> </p> </li> <li> <p>Leading and
     * trailing white spaces are trimmed from both the key and value.</p> </li> <li>
     * <p>A maximum of 50 user-applied tags is allowed for any AWS OpsWorks-CM server
     * or backup.</p> </li> </ul>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A map that contains tag keys and tag values to attach to AWS OpsWorks-CM
     * servers or backups.</p> <ul> <li> <p>The key cannot be empty.</p> </li> <li>
     * <p>The key can be a maximum of 127 characters, and can contain only Unicode
     * letters, numbers, or separators, or the following special characters: <code>+ -
     * = . _ : /</code> </p> </li> <li> <p>The value can be a maximum 255 characters,
     * and contain only Unicode letters, numbers, or separators, or the following
     * special characters: <code>+ - = . _ : /</code> </p> </li> <li> <p>Leading and
     * trailing white spaces are trimmed from both the key and value.</p> </li> <li>
     * <p>A maximum of 50 user-applied tags is allowed for any AWS OpsWorks-CM server
     * or backup.</p> </li> </ul>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A map that contains tag keys and tag values to attach to AWS OpsWorks-CM
     * servers or backups.</p> <ul> <li> <p>The key cannot be empty.</p> </li> <li>
     * <p>The key can be a maximum of 127 characters, and can contain only Unicode
     * letters, numbers, or separators, or the following special characters: <code>+ -
     * = . _ : /</code> </p> </li> <li> <p>The value can be a maximum 255 characters,
     * and contain only Unicode letters, numbers, or separators, or the following
     * special characters: <code>+ - = . _ : /</code> </p> </li> <li> <p>Leading and
     * trailing white spaces are trimmed from both the key and value.</p> </li> <li>
     * <p>A maximum of 50 user-applied tags is allowed for any AWS OpsWorks-CM server
     * or backup.</p> </li> </ul>
     */
    inline TagResourceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A map that contains tag keys and tag values to attach to AWS OpsWorks-CM
     * servers or backups.</p> <ul> <li> <p>The key cannot be empty.</p> </li> <li>
     * <p>The key can be a maximum of 127 characters, and can contain only Unicode
     * letters, numbers, or separators, or the following special characters: <code>+ -
     * = . _ : /</code> </p> </li> <li> <p>The value can be a maximum 255 characters,
     * and contain only Unicode letters, numbers, or separators, or the following
     * special characters: <code>+ - = . _ : /</code> </p> </li> <li> <p>Leading and
     * trailing white spaces are trimmed from both the key and value.</p> </li> <li>
     * <p>A maximum of 50 user-applied tags is allowed for any AWS OpsWorks-CM server
     * or backup.</p> </li> </ul>
     */
    inline TagResourceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map that contains tag keys and tag values to attach to AWS OpsWorks-CM
     * servers or backups.</p> <ul> <li> <p>The key cannot be empty.</p> </li> <li>
     * <p>The key can be a maximum of 127 characters, and can contain only Unicode
     * letters, numbers, or separators, or the following special characters: <code>+ -
     * = . _ : /</code> </p> </li> <li> <p>The value can be a maximum 255 characters,
     * and contain only Unicode letters, numbers, or separators, or the following
     * special characters: <code>+ - = . _ : /</code> </p> </li> <li> <p>Leading and
     * trailing white spaces are trimmed from both the key and value.</p> </li> <li>
     * <p>A maximum of 50 user-applied tags is allowed for any AWS OpsWorks-CM server
     * or backup.</p> </li> </ul>
     */
    inline TagResourceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values to attach to AWS OpsWorks-CM
     * servers or backups.</p> <ul> <li> <p>The key cannot be empty.</p> </li> <li>
     * <p>The key can be a maximum of 127 characters, and can contain only Unicode
     * letters, numbers, or separators, or the following special characters: <code>+ -
     * = . _ : /</code> </p> </li> <li> <p>The value can be a maximum 255 characters,
     * and contain only Unicode letters, numbers, or separators, or the following
     * special characters: <code>+ - = . _ : /</code> </p> </li> <li> <p>Leading and
     * trailing white spaces are trimmed from both the key and value.</p> </li> <li>
     * <p>A maximum of 50 user-applied tags is allowed for any AWS OpsWorks-CM server
     * or backup.</p> </li> </ul>
     */
    inline TagResourceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
