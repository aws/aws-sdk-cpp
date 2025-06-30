/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>

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
namespace MedicalImaging
{
namespace Model
{

  /**
   * <p>Specifies the overrides used in image set modification calls to
   * <code>CopyImageSet</code> and <code>UpdateImageSetMetadata</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/Overrides">AWS
   * API Reference</a></p>
   */
  class Overrides
  {
  public:
    AWS_MEDICALIMAGING_API Overrides() = default;
    AWS_MEDICALIMAGING_API Overrides(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Overrides& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Providing this parameter will force completion of the
     * <code>CopyImageSet</code> and <code>UpdateImageSetMetadata</code> actions, even
     * if metadata is inconsistent at the Patient, Study, and/or Series levels.</p>
     */
    inline bool GetForced() const { return m_forced; }
    inline bool ForcedHasBeenSet() const { return m_forcedHasBeenSet; }
    inline void SetForced(bool value) { m_forcedHasBeenSet = true; m_forced = value; }
    inline Overrides& WithForced(bool value) { SetForced(value); return *this;}
    ///@}
  private:

    bool m_forced{false};
    bool m_forcedHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
