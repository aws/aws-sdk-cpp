/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/networkmanager/model/GlobalNetworkState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/model/Tag.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes a global network. This is a single private network acting as a
   * high-level container for your network objects, including an Amazon Web
   * Services-managed Core Network.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GlobalNetwork">AWS
   * API Reference</a></p>
   */
  class GlobalNetwork
  {
  public:
    AWS_NETWORKMANAGER_API GlobalNetwork();
    AWS_NETWORKMANAGER_API GlobalNetwork(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API GlobalNetwork& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the global network.</p>
     */
    inline const Aws::String& GetGlobalNetworkId() const{ return m_globalNetworkId; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(const Aws::String& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = value; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(Aws::String&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::move(value); }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(const char* value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId.assign(value); }

    /**
     * <p>The ID of the global network.</p>
     */
    inline GlobalNetwork& WithGlobalNetworkId(const Aws::String& value) { SetGlobalNetworkId(value); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline GlobalNetwork& WithGlobalNetworkId(Aws::String&& value) { SetGlobalNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline GlobalNetwork& WithGlobalNetworkId(const char* value) { SetGlobalNetworkId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the global network.</p>
     */
    inline const Aws::String& GetGlobalNetworkArn() const{ return m_globalNetworkArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the global network.</p>
     */
    inline bool GlobalNetworkArnHasBeenSet() const { return m_globalNetworkArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the global network.</p>
     */
    inline void SetGlobalNetworkArn(const Aws::String& value) { m_globalNetworkArnHasBeenSet = true; m_globalNetworkArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the global network.</p>
     */
    inline void SetGlobalNetworkArn(Aws::String&& value) { m_globalNetworkArnHasBeenSet = true; m_globalNetworkArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the global network.</p>
     */
    inline void SetGlobalNetworkArn(const char* value) { m_globalNetworkArnHasBeenSet = true; m_globalNetworkArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the global network.</p>
     */
    inline GlobalNetwork& WithGlobalNetworkArn(const Aws::String& value) { SetGlobalNetworkArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the global network.</p>
     */
    inline GlobalNetwork& WithGlobalNetworkArn(Aws::String&& value) { SetGlobalNetworkArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the global network.</p>
     */
    inline GlobalNetwork& WithGlobalNetworkArn(const char* value) { SetGlobalNetworkArn(value); return *this;}


    /**
     * <p>The description of the global network.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the global network.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the global network.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the global network.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the global network.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the global network.</p>
     */
    inline GlobalNetwork& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the global network.</p>
     */
    inline GlobalNetwork& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the global network.</p>
     */
    inline GlobalNetwork& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The date and time that the global network was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time that the global network was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time that the global network was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time that the global network was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time that the global network was created.</p>
     */
    inline GlobalNetwork& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time that the global network was created.</p>
     */
    inline GlobalNetwork& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The state of the global network.</p>
     */
    inline const GlobalNetworkState& GetState() const{ return m_state; }

    /**
     * <p>The state of the global network.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the global network.</p>
     */
    inline void SetState(const GlobalNetworkState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the global network.</p>
     */
    inline void SetState(GlobalNetworkState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the global network.</p>
     */
    inline GlobalNetwork& WithState(const GlobalNetworkState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the global network.</p>
     */
    inline GlobalNetwork& WithState(GlobalNetworkState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The tags for the global network.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the global network.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags for the global network.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for the global network.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for the global network.</p>
     */
    inline GlobalNetwork& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the global network.</p>
     */
    inline GlobalNetwork& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the global network.</p>
     */
    inline GlobalNetwork& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags for the global network.</p>
     */
    inline GlobalNetwork& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    Aws::String m_globalNetworkArn;
    bool m_globalNetworkArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    GlobalNetworkState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
