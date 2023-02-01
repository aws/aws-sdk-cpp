/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MediaStore
{
namespace Model
{

  /**
   * <p>A setting that enables metrics at the object level. Each rule contains an
   * object group and an object group name. If the policy includes the
   * MetricPolicyRules parameter, you must include at least one rule. Each metric
   * policy can include up to five rules by default. You can also <a
   * href="https://console.aws.amazon.com/servicequotas/home?region=us-east-1#!/services/mediastore/quotas">request
   * a quota increase</a> to allow up to 300 rules per policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/MetricPolicyRule">AWS
   * API Reference</a></p>
   */
  class MetricPolicyRule
  {
  public:
    AWS_MEDIASTORE_API MetricPolicyRule();
    AWS_MEDIASTORE_API MetricPolicyRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIASTORE_API MetricPolicyRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIASTORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A path or file name that defines which objects to include in the group.
     * Wildcards (*) are acceptable.</p>
     */
    inline const Aws::String& GetObjectGroup() const{ return m_objectGroup; }

    /**
     * <p>A path or file name that defines which objects to include in the group.
     * Wildcards (*) are acceptable.</p>
     */
    inline bool ObjectGroupHasBeenSet() const { return m_objectGroupHasBeenSet; }

    /**
     * <p>A path or file name that defines which objects to include in the group.
     * Wildcards (*) are acceptable.</p>
     */
    inline void SetObjectGroup(const Aws::String& value) { m_objectGroupHasBeenSet = true; m_objectGroup = value; }

    /**
     * <p>A path or file name that defines which objects to include in the group.
     * Wildcards (*) are acceptable.</p>
     */
    inline void SetObjectGroup(Aws::String&& value) { m_objectGroupHasBeenSet = true; m_objectGroup = std::move(value); }

    /**
     * <p>A path or file name that defines which objects to include in the group.
     * Wildcards (*) are acceptable.</p>
     */
    inline void SetObjectGroup(const char* value) { m_objectGroupHasBeenSet = true; m_objectGroup.assign(value); }

    /**
     * <p>A path or file name that defines which objects to include in the group.
     * Wildcards (*) are acceptable.</p>
     */
    inline MetricPolicyRule& WithObjectGroup(const Aws::String& value) { SetObjectGroup(value); return *this;}

    /**
     * <p>A path or file name that defines which objects to include in the group.
     * Wildcards (*) are acceptable.</p>
     */
    inline MetricPolicyRule& WithObjectGroup(Aws::String&& value) { SetObjectGroup(std::move(value)); return *this;}

    /**
     * <p>A path or file name that defines which objects to include in the group.
     * Wildcards (*) are acceptable.</p>
     */
    inline MetricPolicyRule& WithObjectGroup(const char* value) { SetObjectGroup(value); return *this;}


    /**
     * <p>A name that allows you to refer to the object group.</p>
     */
    inline const Aws::String& GetObjectGroupName() const{ return m_objectGroupName; }

    /**
     * <p>A name that allows you to refer to the object group.</p>
     */
    inline bool ObjectGroupNameHasBeenSet() const { return m_objectGroupNameHasBeenSet; }

    /**
     * <p>A name that allows you to refer to the object group.</p>
     */
    inline void SetObjectGroupName(const Aws::String& value) { m_objectGroupNameHasBeenSet = true; m_objectGroupName = value; }

    /**
     * <p>A name that allows you to refer to the object group.</p>
     */
    inline void SetObjectGroupName(Aws::String&& value) { m_objectGroupNameHasBeenSet = true; m_objectGroupName = std::move(value); }

    /**
     * <p>A name that allows you to refer to the object group.</p>
     */
    inline void SetObjectGroupName(const char* value) { m_objectGroupNameHasBeenSet = true; m_objectGroupName.assign(value); }

    /**
     * <p>A name that allows you to refer to the object group.</p>
     */
    inline MetricPolicyRule& WithObjectGroupName(const Aws::String& value) { SetObjectGroupName(value); return *this;}

    /**
     * <p>A name that allows you to refer to the object group.</p>
     */
    inline MetricPolicyRule& WithObjectGroupName(Aws::String&& value) { SetObjectGroupName(std::move(value)); return *this;}

    /**
     * <p>A name that allows you to refer to the object group.</p>
     */
    inline MetricPolicyRule& WithObjectGroupName(const char* value) { SetObjectGroupName(value); return *this;}

  private:

    Aws::String m_objectGroup;
    bool m_objectGroupHasBeenSet = false;

    Aws::String m_objectGroupName;
    bool m_objectGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaStore
} // namespace Aws
