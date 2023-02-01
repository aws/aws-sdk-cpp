/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/OperatingSystem.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Defines the basic information about a patch baseline.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PatchBaselineIdentity">AWS
   * API Reference</a></p>
   */
  class PatchBaselineIdentity
  {
  public:
    AWS_SSM_API PatchBaselineIdentity();
    AWS_SSM_API PatchBaselineIdentity(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API PatchBaselineIdentity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the patch baseline.</p>
     */
    inline const Aws::String& GetBaselineId() const{ return m_baselineId; }

    /**
     * <p>The ID of the patch baseline.</p>
     */
    inline bool BaselineIdHasBeenSet() const { return m_baselineIdHasBeenSet; }

    /**
     * <p>The ID of the patch baseline.</p>
     */
    inline void SetBaselineId(const Aws::String& value) { m_baselineIdHasBeenSet = true; m_baselineId = value; }

    /**
     * <p>The ID of the patch baseline.</p>
     */
    inline void SetBaselineId(Aws::String&& value) { m_baselineIdHasBeenSet = true; m_baselineId = std::move(value); }

    /**
     * <p>The ID of the patch baseline.</p>
     */
    inline void SetBaselineId(const char* value) { m_baselineIdHasBeenSet = true; m_baselineId.assign(value); }

    /**
     * <p>The ID of the patch baseline.</p>
     */
    inline PatchBaselineIdentity& WithBaselineId(const Aws::String& value) { SetBaselineId(value); return *this;}

    /**
     * <p>The ID of the patch baseline.</p>
     */
    inline PatchBaselineIdentity& WithBaselineId(Aws::String&& value) { SetBaselineId(std::move(value)); return *this;}

    /**
     * <p>The ID of the patch baseline.</p>
     */
    inline PatchBaselineIdentity& WithBaselineId(const char* value) { SetBaselineId(value); return *this;}


    /**
     * <p>The name of the patch baseline.</p>
     */
    inline const Aws::String& GetBaselineName() const{ return m_baselineName; }

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline bool BaselineNameHasBeenSet() const { return m_baselineNameHasBeenSet; }

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline void SetBaselineName(const Aws::String& value) { m_baselineNameHasBeenSet = true; m_baselineName = value; }

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline void SetBaselineName(Aws::String&& value) { m_baselineNameHasBeenSet = true; m_baselineName = std::move(value); }

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline void SetBaselineName(const char* value) { m_baselineNameHasBeenSet = true; m_baselineName.assign(value); }

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline PatchBaselineIdentity& WithBaselineName(const Aws::String& value) { SetBaselineName(value); return *this;}

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline PatchBaselineIdentity& WithBaselineName(Aws::String&& value) { SetBaselineName(std::move(value)); return *this;}

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline PatchBaselineIdentity& WithBaselineName(const char* value) { SetBaselineName(value); return *this;}


    /**
     * <p>Defines the operating system the patch baseline applies to. The default value
     * is <code>WINDOWS</code>. </p>
     */
    inline const OperatingSystem& GetOperatingSystem() const{ return m_operatingSystem; }

    /**
     * <p>Defines the operating system the patch baseline applies to. The default value
     * is <code>WINDOWS</code>. </p>
     */
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }

    /**
     * <p>Defines the operating system the patch baseline applies to. The default value
     * is <code>WINDOWS</code>. </p>
     */
    inline void SetOperatingSystem(const OperatingSystem& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }

    /**
     * <p>Defines the operating system the patch baseline applies to. The default value
     * is <code>WINDOWS</code>. </p>
     */
    inline void SetOperatingSystem(OperatingSystem&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::move(value); }

    /**
     * <p>Defines the operating system the patch baseline applies to. The default value
     * is <code>WINDOWS</code>. </p>
     */
    inline PatchBaselineIdentity& WithOperatingSystem(const OperatingSystem& value) { SetOperatingSystem(value); return *this;}

    /**
     * <p>Defines the operating system the patch baseline applies to. The default value
     * is <code>WINDOWS</code>. </p>
     */
    inline PatchBaselineIdentity& WithOperatingSystem(OperatingSystem&& value) { SetOperatingSystem(std::move(value)); return *this;}


    /**
     * <p>The description of the patch baseline.</p>
     */
    inline const Aws::String& GetBaselineDescription() const{ return m_baselineDescription; }

    /**
     * <p>The description of the patch baseline.</p>
     */
    inline bool BaselineDescriptionHasBeenSet() const { return m_baselineDescriptionHasBeenSet; }

    /**
     * <p>The description of the patch baseline.</p>
     */
    inline void SetBaselineDescription(const Aws::String& value) { m_baselineDescriptionHasBeenSet = true; m_baselineDescription = value; }

    /**
     * <p>The description of the patch baseline.</p>
     */
    inline void SetBaselineDescription(Aws::String&& value) { m_baselineDescriptionHasBeenSet = true; m_baselineDescription = std::move(value); }

    /**
     * <p>The description of the patch baseline.</p>
     */
    inline void SetBaselineDescription(const char* value) { m_baselineDescriptionHasBeenSet = true; m_baselineDescription.assign(value); }

    /**
     * <p>The description of the patch baseline.</p>
     */
    inline PatchBaselineIdentity& WithBaselineDescription(const Aws::String& value) { SetBaselineDescription(value); return *this;}

    /**
     * <p>The description of the patch baseline.</p>
     */
    inline PatchBaselineIdentity& WithBaselineDescription(Aws::String&& value) { SetBaselineDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the patch baseline.</p>
     */
    inline PatchBaselineIdentity& WithBaselineDescription(const char* value) { SetBaselineDescription(value); return *this;}


    /**
     * <p>Whether this is the default baseline. Amazon Web Services Systems Manager
     * supports creating multiple default patch baselines. For example, you can create
     * a default patch baseline for each operating system.</p>
     */
    inline bool GetDefaultBaseline() const{ return m_defaultBaseline; }

    /**
     * <p>Whether this is the default baseline. Amazon Web Services Systems Manager
     * supports creating multiple default patch baselines. For example, you can create
     * a default patch baseline for each operating system.</p>
     */
    inline bool DefaultBaselineHasBeenSet() const { return m_defaultBaselineHasBeenSet; }

    /**
     * <p>Whether this is the default baseline. Amazon Web Services Systems Manager
     * supports creating multiple default patch baselines. For example, you can create
     * a default patch baseline for each operating system.</p>
     */
    inline void SetDefaultBaseline(bool value) { m_defaultBaselineHasBeenSet = true; m_defaultBaseline = value; }

    /**
     * <p>Whether this is the default baseline. Amazon Web Services Systems Manager
     * supports creating multiple default patch baselines. For example, you can create
     * a default patch baseline for each operating system.</p>
     */
    inline PatchBaselineIdentity& WithDefaultBaseline(bool value) { SetDefaultBaseline(value); return *this;}

  private:

    Aws::String m_baselineId;
    bool m_baselineIdHasBeenSet = false;

    Aws::String m_baselineName;
    bool m_baselineNameHasBeenSet = false;

    OperatingSystem m_operatingSystem;
    bool m_operatingSystemHasBeenSet = false;

    Aws::String m_baselineDescription;
    bool m_baselineDescriptionHasBeenSet = false;

    bool m_defaultBaseline;
    bool m_defaultBaselineHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
