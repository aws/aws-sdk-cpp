/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/ResourceType.h>
#include <aws/workmail/model/EntityState.h>
#include <aws/core/utils/DateTime.h>
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
namespace WorkMail
{
namespace Model
{

  /**
   * <p>The representation of a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/Resource">AWS
   * API Reference</a></p>
   */
  class Resource
  {
  public:
    AWS_WORKMAIL_API Resource();
    AWS_WORKMAIL_API Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the resource.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Resource& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Resource& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Resource& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email of the resource.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }
    inline Resource& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}
    inline Resource& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}
    inline Resource& WithEmail(const char* value) { SetEmail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Resource& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Resource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Resource& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the resource: equipment or room.</p>
     */
    inline const ResourceType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ResourceType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ResourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Resource& WithType(const ResourceType& value) { SetType(value); return *this;}
    inline Resource& WithType(ResourceType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the resource, which can be ENABLED, DISABLED, or DELETED.</p>
     */
    inline const EntityState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const EntityState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(EntityState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Resource& WithState(const EntityState& value) { SetState(value); return *this;}
    inline Resource& WithState(EntityState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date indicating when the resource was enabled for WorkMail use.</p>
     */
    inline const Aws::Utils::DateTime& GetEnabledDate() const{ return m_enabledDate; }
    inline bool EnabledDateHasBeenSet() const { return m_enabledDateHasBeenSet; }
    inline void SetEnabledDate(const Aws::Utils::DateTime& value) { m_enabledDateHasBeenSet = true; m_enabledDate = value; }
    inline void SetEnabledDate(Aws::Utils::DateTime&& value) { m_enabledDateHasBeenSet = true; m_enabledDate = std::move(value); }
    inline Resource& WithEnabledDate(const Aws::Utils::DateTime& value) { SetEnabledDate(value); return *this;}
    inline Resource& WithEnabledDate(Aws::Utils::DateTime&& value) { SetEnabledDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date indicating when the resource was disabled from WorkMail use.</p>
     */
    inline const Aws::Utils::DateTime& GetDisabledDate() const{ return m_disabledDate; }
    inline bool DisabledDateHasBeenSet() const { return m_disabledDateHasBeenSet; }
    inline void SetDisabledDate(const Aws::Utils::DateTime& value) { m_disabledDateHasBeenSet = true; m_disabledDate = value; }
    inline void SetDisabledDate(Aws::Utils::DateTime&& value) { m_disabledDateHasBeenSet = true; m_disabledDate = std::move(value); }
    inline Resource& WithDisabledDate(const Aws::Utils::DateTime& value) { SetDisabledDate(value); return *this;}
    inline Resource& WithDisabledDate(Aws::Utils::DateTime&& value) { SetDisabledDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Resource description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Resource& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Resource& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Resource& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ResourceType m_type;
    bool m_typeHasBeenSet = false;

    EntityState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_enabledDate;
    bool m_enabledDateHasBeenSet = false;

    Aws::Utils::DateTime m_disabledDate;
    bool m_disabledDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
