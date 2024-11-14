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
    AWS_QUICKSIGHT_API Image();
    AWS_QUICKSIGHT_API Image(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Image& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source of the logo image.</p>
     */
    inline const ImageSource& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const ImageSource& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(ImageSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline Image& WithSource(const ImageSource& value) { SetSource(value); return *this;}
    inline Image& WithSource(ImageSource&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL that points to the generated logo image.</p>
     */
    inline const Aws::String& GetGeneratedImageUrl() const{ return m_generatedImageUrl; }
    inline bool GeneratedImageUrlHasBeenSet() const { return m_generatedImageUrlHasBeenSet; }
    inline void SetGeneratedImageUrl(const Aws::String& value) { m_generatedImageUrlHasBeenSet = true; m_generatedImageUrl = value; }
    inline void SetGeneratedImageUrl(Aws::String&& value) { m_generatedImageUrlHasBeenSet = true; m_generatedImageUrl = std::move(value); }
    inline void SetGeneratedImageUrl(const char* value) { m_generatedImageUrlHasBeenSet = true; m_generatedImageUrl.assign(value); }
    inline Image& WithGeneratedImageUrl(const Aws::String& value) { SetGeneratedImageUrl(value); return *this;}
    inline Image& WithGeneratedImageUrl(Aws::String&& value) { SetGeneratedImageUrl(std::move(value)); return *this;}
    inline Image& WithGeneratedImageUrl(const char* value) { SetGeneratedImageUrl(value); return *this;}
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
