/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>

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
namespace Omics
{
namespace Model
{

  /**
   * <p>Formatting options for a VCF file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/VcfOptions">AWS
   * API Reference</a></p>
   */
  class VcfOptions
  {
  public:
    AWS_OMICS_API VcfOptions() = default;
    AWS_OMICS_API VcfOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API VcfOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The file's ignore qual field setting.</p>
     */
    inline bool GetIgnoreQualField() const { return m_ignoreQualField; }
    inline bool IgnoreQualFieldHasBeenSet() const { return m_ignoreQualFieldHasBeenSet; }
    inline void SetIgnoreQualField(bool value) { m_ignoreQualFieldHasBeenSet = true; m_ignoreQualField = value; }
    inline VcfOptions& WithIgnoreQualField(bool value) { SetIgnoreQualField(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file's ignore filter field setting.</p>
     */
    inline bool GetIgnoreFilterField() const { return m_ignoreFilterField; }
    inline bool IgnoreFilterFieldHasBeenSet() const { return m_ignoreFilterFieldHasBeenSet; }
    inline void SetIgnoreFilterField(bool value) { m_ignoreFilterFieldHasBeenSet = true; m_ignoreFilterField = value; }
    inline VcfOptions& WithIgnoreFilterField(bool value) { SetIgnoreFilterField(value); return *this;}
    ///@}
  private:

    bool m_ignoreQualField{false};
    bool m_ignoreQualFieldHasBeenSet = false;

    bool m_ignoreFilterField{false};
    bool m_ignoreFilterFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
