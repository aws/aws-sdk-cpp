/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>Slate VOD source configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/SlateSource">AWS
   * API Reference</a></p>
   */
  class SlateSource
  {
  public:
    AWS_MEDIATAILOR_API SlateSource() = default;
    AWS_MEDIATAILOR_API SlateSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API SlateSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the source location where the slate VOD source is stored.</p>
     */
    inline const Aws::String& GetSourceLocationName() const { return m_sourceLocationName; }
    inline bool SourceLocationNameHasBeenSet() const { return m_sourceLocationNameHasBeenSet; }
    template<typename SourceLocationNameT = Aws::String>
    void SetSourceLocationName(SourceLocationNameT&& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = std::forward<SourceLocationNameT>(value); }
    template<typename SourceLocationNameT = Aws::String>
    SlateSource& WithSourceLocationName(SourceLocationNameT&& value) { SetSourceLocationName(std::forward<SourceLocationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The slate VOD source name. The VOD source must already exist in a source
     * location before it can be used for slate.</p>
     */
    inline const Aws::String& GetVodSourceName() const { return m_vodSourceName; }
    inline bool VodSourceNameHasBeenSet() const { return m_vodSourceNameHasBeenSet; }
    template<typename VodSourceNameT = Aws::String>
    void SetVodSourceName(VodSourceNameT&& value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName = std::forward<VodSourceNameT>(value); }
    template<typename VodSourceNameT = Aws::String>
    SlateSource& WithVodSourceName(VodSourceNameT&& value) { SetVodSourceName(std::forward<VodSourceNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceLocationName;
    bool m_sourceLocationNameHasBeenSet = false;

    Aws::String m_vodSourceName;
    bool m_vodSourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
