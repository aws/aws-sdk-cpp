/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Cmaf Ingest Output Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CmafIngestOutputSettings">AWS
   * API Reference</a></p>
   */
  class CmafIngestOutputSettings
  {
  public:
    AWS_MEDIALIVE_API CmafIngestOutputSettings() = default;
    AWS_MEDIALIVE_API CmafIngestOutputSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API CmafIngestOutputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * String concatenated to the end of the destination filename.  Required for
     * multiple outputs of the same type.
     */
    inline const Aws::String& GetNameModifier() const { return m_nameModifier; }
    inline bool NameModifierHasBeenSet() const { return m_nameModifierHasBeenSet; }
    template<typename NameModifierT = Aws::String>
    void SetNameModifier(NameModifierT&& value) { m_nameModifierHasBeenSet = true; m_nameModifier = std::forward<NameModifierT>(value); }
    template<typename NameModifierT = Aws::String>
    CmafIngestOutputSettings& WithNameModifier(NameModifierT&& value) { SetNameModifier(std::forward<NameModifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nameModifier;
    bool m_nameModifierHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
