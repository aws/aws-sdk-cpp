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
    AWS_SFN_API ActivityListItem();
    AWS_SFN_API ActivityListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API ActivityListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the activity.</p>
     */
    inline const Aws::String& GetActivityArn() const{ return m_activityArn; }
    inline bool ActivityArnHasBeenSet() const { return m_activityArnHasBeenSet; }
    inline void SetActivityArn(const Aws::String& value) { m_activityArnHasBeenSet = true; m_activityArn = value; }
    inline void SetActivityArn(Aws::String&& value) { m_activityArnHasBeenSet = true; m_activityArn = std::move(value); }
    inline void SetActivityArn(const char* value) { m_activityArnHasBeenSet = true; m_activityArn.assign(value); }
    inline ActivityListItem& WithActivityArn(const Aws::String& value) { SetActivityArn(value); return *this;}
    inline ActivityListItem& WithActivityArn(Aws::String&& value) { SetActivityArn(std::move(value)); return *this;}
    inline ActivityListItem& WithActivityArn(const char* value) { SetActivityArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the activity.</p> <p>A name must <i>not</i> contain:</p> <ul>
     * <li> <p>white space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [ ]</code>
     * </p> </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li>
     * <p>special characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li>
     * <li> <p>control characters (<code>U+0000-001F</code>,
     * <code>U+007F-009F</code>)</p> </li> </ul> <p>To enable logging with CloudWatch
     * Logs, the name should only contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ActivityListItem& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ActivityListItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ActivityListItem& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the activity is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline ActivityListItem& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline ActivityListItem& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_activityArn;
    bool m_activityArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
