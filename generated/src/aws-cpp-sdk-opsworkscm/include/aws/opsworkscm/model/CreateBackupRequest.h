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
  class CreateBackupRequest : public OpsWorksCMRequest
  {
  public:
    AWS_OPSWORKSCM_API CreateBackupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBackup"; }

    AWS_OPSWORKSCM_API Aws::String SerializePayload() const override;

    AWS_OPSWORKSCM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the server that you want to back up. </p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p>The name of the server that you want to back up. </p>
     */
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }

    /**
     * <p>The name of the server that you want to back up. </p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p>The name of the server that you want to back up. </p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }

    /**
     * <p>The name of the server that you want to back up. </p>
     */
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }

    /**
     * <p>The name of the server that you want to back up. </p>
     */
    inline CreateBackupRequest& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>The name of the server that you want to back up. </p>
     */
    inline CreateBackupRequest& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p>The name of the server that you want to back up. </p>
     */
    inline CreateBackupRequest& WithServerName(const char* value) { SetServerName(value); return *this;}


    /**
     * <p> A user-defined description of the backup. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> A user-defined description of the backup. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> A user-defined description of the backup. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> A user-defined description of the backup. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> A user-defined description of the backup. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> A user-defined description of the backup. </p>
     */
    inline CreateBackupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> A user-defined description of the backup. </p>
     */
    inline CreateBackupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> A user-defined description of the backup. </p>
     */
    inline CreateBackupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A map that contains tag keys and tag values to attach to an AWS OpsWorks-CM
     * server backup.</p> <ul> <li> <p>The key cannot be empty.</p> </li> <li> <p>The
     * key can be a maximum of 127 characters, and can contain only Unicode letters,
     * numbers, or separators, or the following special characters: <code>+ - = . _ :
     * /</code> </p> </li> <li> <p>The value can be a maximum 255 characters, and
     * contain only Unicode letters, numbers, or separators, or the following special
     * characters: <code>+ - = . _ : /</code> </p> </li> <li> <p>Leading and trailing
     * white spaces are trimmed from both the key and value.</p> </li> <li> <p>A
     * maximum of 50 user-applied tags is allowed for tag-supported AWS OpsWorks-CM
     * resources.</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A map that contains tag keys and tag values to attach to an AWS OpsWorks-CM
     * server backup.</p> <ul> <li> <p>The key cannot be empty.</p> </li> <li> <p>The
     * key can be a maximum of 127 characters, and can contain only Unicode letters,
     * numbers, or separators, or the following special characters: <code>+ - = . _ :
     * /</code> </p> </li> <li> <p>The value can be a maximum 255 characters, and
     * contain only Unicode letters, numbers, or separators, or the following special
     * characters: <code>+ - = . _ : /</code> </p> </li> <li> <p>Leading and trailing
     * white spaces are trimmed from both the key and value.</p> </li> <li> <p>A
     * maximum of 50 user-applied tags is allowed for tag-supported AWS OpsWorks-CM
     * resources.</p> </li> </ul>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A map that contains tag keys and tag values to attach to an AWS OpsWorks-CM
     * server backup.</p> <ul> <li> <p>The key cannot be empty.</p> </li> <li> <p>The
     * key can be a maximum of 127 characters, and can contain only Unicode letters,
     * numbers, or separators, or the following special characters: <code>+ - = . _ :
     * /</code> </p> </li> <li> <p>The value can be a maximum 255 characters, and
     * contain only Unicode letters, numbers, or separators, or the following special
     * characters: <code>+ - = . _ : /</code> </p> </li> <li> <p>Leading and trailing
     * white spaces are trimmed from both the key and value.</p> </li> <li> <p>A
     * maximum of 50 user-applied tags is allowed for tag-supported AWS OpsWorks-CM
     * resources.</p> </li> </ul>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A map that contains tag keys and tag values to attach to an AWS OpsWorks-CM
     * server backup.</p> <ul> <li> <p>The key cannot be empty.</p> </li> <li> <p>The
     * key can be a maximum of 127 characters, and can contain only Unicode letters,
     * numbers, or separators, or the following special characters: <code>+ - = . _ :
     * /</code> </p> </li> <li> <p>The value can be a maximum 255 characters, and
     * contain only Unicode letters, numbers, or separators, or the following special
     * characters: <code>+ - = . _ : /</code> </p> </li> <li> <p>Leading and trailing
     * white spaces are trimmed from both the key and value.</p> </li> <li> <p>A
     * maximum of 50 user-applied tags is allowed for tag-supported AWS OpsWorks-CM
     * resources.</p> </li> </ul>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A map that contains tag keys and tag values to attach to an AWS OpsWorks-CM
     * server backup.</p> <ul> <li> <p>The key cannot be empty.</p> </li> <li> <p>The
     * key can be a maximum of 127 characters, and can contain only Unicode letters,
     * numbers, or separators, or the following special characters: <code>+ - = . _ :
     * /</code> </p> </li> <li> <p>The value can be a maximum 255 characters, and
     * contain only Unicode letters, numbers, or separators, or the following special
     * characters: <code>+ - = . _ : /</code> </p> </li> <li> <p>Leading and trailing
     * white spaces are trimmed from both the key and value.</p> </li> <li> <p>A
     * maximum of 50 user-applied tags is allowed for tag-supported AWS OpsWorks-CM
     * resources.</p> </li> </ul>
     */
    inline CreateBackupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A map that contains tag keys and tag values to attach to an AWS OpsWorks-CM
     * server backup.</p> <ul> <li> <p>The key cannot be empty.</p> </li> <li> <p>The
     * key can be a maximum of 127 characters, and can contain only Unicode letters,
     * numbers, or separators, or the following special characters: <code>+ - = . _ :
     * /</code> </p> </li> <li> <p>The value can be a maximum 255 characters, and
     * contain only Unicode letters, numbers, or separators, or the following special
     * characters: <code>+ - = . _ : /</code> </p> </li> <li> <p>Leading and trailing
     * white spaces are trimmed from both the key and value.</p> </li> <li> <p>A
     * maximum of 50 user-applied tags is allowed for tag-supported AWS OpsWorks-CM
     * resources.</p> </li> </ul>
     */
    inline CreateBackupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map that contains tag keys and tag values to attach to an AWS OpsWorks-CM
     * server backup.</p> <ul> <li> <p>The key cannot be empty.</p> </li> <li> <p>The
     * key can be a maximum of 127 characters, and can contain only Unicode letters,
     * numbers, or separators, or the following special characters: <code>+ - = . _ :
     * /</code> </p> </li> <li> <p>The value can be a maximum 255 characters, and
     * contain only Unicode letters, numbers, or separators, or the following special
     * characters: <code>+ - = . _ : /</code> </p> </li> <li> <p>Leading and trailing
     * white spaces are trimmed from both the key and value.</p> </li> <li> <p>A
     * maximum of 50 user-applied tags is allowed for tag-supported AWS OpsWorks-CM
     * resources.</p> </li> </ul>
     */
    inline CreateBackupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values to attach to an AWS OpsWorks-CM
     * server backup.</p> <ul> <li> <p>The key cannot be empty.</p> </li> <li> <p>The
     * key can be a maximum of 127 characters, and can contain only Unicode letters,
     * numbers, or separators, or the following special characters: <code>+ - = . _ :
     * /</code> </p> </li> <li> <p>The value can be a maximum 255 characters, and
     * contain only Unicode letters, numbers, or separators, or the following special
     * characters: <code>+ - = . _ : /</code> </p> </li> <li> <p>Leading and trailing
     * white spaces are trimmed from both the key and value.</p> </li> <li> <p>A
     * maximum of 50 user-applied tags is allowed for tag-supported AWS OpsWorks-CM
     * resources.</p> </li> </ul>
     */
    inline CreateBackupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
