/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ImageSource.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The logo image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Image">AWS
   * API Reference</a></p>
   */
  class Image
  {
  public:
    AWS_QUICKSIGHT_API Image() = default;
    AWS_QUICKSIGHT_API Image(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Image& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source of the logo image.</p>
     */
    inline const ImageSource& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = ImageSource>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = ImageSource>
    Image& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL that points to the generated logo image.</p>
     */
    inline const Aws::String& GetGeneratedImageUrl() const { return m_generatedImageUrl; }
    inline bool GeneratedImageUrlHasBeenSet() const { return m_generatedImageUrlHasBeenSet; }
    template<typename GeneratedImageUrlT = Aws::String>
    void SetGeneratedImageUrl(GeneratedImageUrlT&& value) { m_generatedImageUrlHasBeenSet = true; m_generatedImageUrl = std::forward<GeneratedImageUrlT>(value); }
    template<typename GeneratedImageUrlT = Aws::String>
    Image& WithGeneratedImageUrl(GeneratedImageUrlT&& value) { SetGeneratedImageUrl(std::forward<GeneratedImageUrlT>(value)); return *this;}
    ///@}
  private:

    ImageSource m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_generatedImageUrl;
    bool m_generatedImageUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
