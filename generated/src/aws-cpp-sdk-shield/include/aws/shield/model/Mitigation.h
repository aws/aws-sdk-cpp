/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
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
namespace Shield
{
namespace Model
{

  /**
   * <p>The mitigation applied to a DDoS attack.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/Mitigation">AWS
   * API Reference</a></p>
   */
  class Mitigation
  {
  public:
    AWS_SHIELD_API Mitigation();
    AWS_SHIELD_API Mitigation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Mitigation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the mitigation taken for this attack.</p>
     */
    inline const Aws::String& GetMitigationName() const{ return m_mitigationName; }

    /**
     * <p>The name of the mitigation taken for this attack.</p>
     */
    inline bool MitigationNameHasBeenSet() const { return m_mitigationNameHasBeenSet; }

    /**
     * <p>The name of the mitigation taken for this attack.</p>
     */
    inline void SetMitigationName(const Aws::String& value) { m_mitigationNameHasBeenSet = true; m_mitigationName = value; }

    /**
     * <p>The name of the mitigation taken for this attack.</p>
     */
    inline void SetMitigationName(Aws::String&& value) { m_mitigationNameHasBeenSet = true; m_mitigationName = std::move(value); }

    /**
     * <p>The name of the mitigation taken for this attack.</p>
     */
    inline void SetMitigationName(const char* value) { m_mitigationNameHasBeenSet = true; m_mitigationName.assign(value); }

    /**
     * <p>The name of the mitigation taken for this attack.</p>
     */
    inline Mitigation& WithMitigationName(const Aws::String& value) { SetMitigationName(value); return *this;}

    /**
     * <p>The name of the mitigation taken for this attack.</p>
     */
    inline Mitigation& WithMitigationName(Aws::String&& value) { SetMitigationName(std::move(value)); return *this;}

    /**
     * <p>The name of the mitigation taken for this attack.</p>
     */
    inline Mitigation& WithMitigationName(const char* value) { SetMitigationName(value); return *this;}

  private:

    Aws::String m_mitigationName;
    bool m_mitigationNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
