/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
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
namespace SFN
{
namespace Model
{

  /**
   * <p>Contains details about an activity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ActivityListItem">AWS
   * API Reference</a></p>
   */
  class ActivityListItem
  {
  public:
    AWS_SFN_API ActivityListItem() = default;
    AWS_SFN_API ActivityListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API ActivityListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the activity.</p>
     */
    inline const Aws::String& GetActivityArn() const { return m_activityArn; }
    inline bool ActivityArnHasBeenSet() const { return m_activityArnHasBeenSet; }
    template<typename ActivityArnT = Aws::String>
    void SetActivityArn(ActivityArnT&& value) { m_activityArnHasBeenSet = true; m_activityArn = std::forward<ActivityArnT>(value); }
    template<typename ActivityArnT = Aws::String>
    ActivityListItem& WithActivityArn(ActivityArnT&& value) { SetActivityArn(std::forward<ActivityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the activity.</p> <p>A name must <i>not</i> contain:</p> <ul>
     * <li> <p>white space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [ ]</code>
     * </p> </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li>
     * <p>special characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li>
     * <li> <p>control characters (<code>U+0000-001F</code>, <code>U+007F-009F</code>,
     * <code>U+FFFE-FFFF</code>)</p> </li> <li> <p>surrogates
     * (<code>U+D800-DFFF</code>)</p> </li> <li> <p>invalid characters (<code>
     * U+10FFFF</code>)</p> </li> </ul> <p>To enable logging with CloudWatch Logs, the
     * name should only contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ActivityListItem& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the activity is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    ActivityListItem& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_activityArn;
    bool m_activityArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
