/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/model/ActivityType.h>
#include <aws/swf/model/RegistrationStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SWF
{
namespace Model
{

  /**
   * <p>Detailed information about an activity type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ActivityTypeInfo">AWS
   * API Reference</a></p>
   */
  class ActivityTypeInfo
  {
  public:
    AWS_SWF_API ActivityTypeInfo() = default;
    AWS_SWF_API ActivityTypeInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API ActivityTypeInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <a>ActivityType</a> type structure representing the activity type.</p>
     */
    inline const ActivityType& GetActivityType() const { return m_activityType; }
    inline bool ActivityTypeHasBeenSet() const { return m_activityTypeHasBeenSet; }
    template<typename ActivityTypeT = ActivityType>
    void SetActivityType(ActivityTypeT&& value) { m_activityTypeHasBeenSet = true; m_activityType = std::forward<ActivityTypeT>(value); }
    template<typename ActivityTypeT = ActivityType>
    ActivityTypeInfo& WithActivityType(ActivityTypeT&& value) { SetActivityType(std::forward<ActivityTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the activity type.</p>
     */
    inline RegistrationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(RegistrationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ActivityTypeInfo& WithStatus(RegistrationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the activity type provided in
     * <a>RegisterActivityType</a>.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ActivityTypeInfo& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time this activity type was created through
     * <a>RegisterActivityType</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    ActivityTypeInfo& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If DEPRECATED, the date and time <a>DeprecateActivityType</a> was called.</p>
     */
    inline const Aws::Utils::DateTime& GetDeprecationDate() const { return m_deprecationDate; }
    inline bool DeprecationDateHasBeenSet() const { return m_deprecationDateHasBeenSet; }
    template<typename DeprecationDateT = Aws::Utils::DateTime>
    void SetDeprecationDate(DeprecationDateT&& value) { m_deprecationDateHasBeenSet = true; m_deprecationDate = std::forward<DeprecationDateT>(value); }
    template<typename DeprecationDateT = Aws::Utils::DateTime>
    ActivityTypeInfo& WithDeprecationDate(DeprecationDateT&& value) { SetDeprecationDate(std::forward<DeprecationDateT>(value)); return *this;}
    ///@}
  private:

    ActivityType m_activityType;
    bool m_activityTypeHasBeenSet = false;

    RegistrationStatus m_status{RegistrationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_deprecationDate{};
    bool m_deprecationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
