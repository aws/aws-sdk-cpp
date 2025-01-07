/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/ImageExtractionConfiguration.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>The configuration for extracting information from media in
   * documents.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/MediaExtractionConfiguration">AWS
   * API Reference</a></p>
   */
  class MediaExtractionConfiguration
  {
  public:
    AWS_QBUSINESS_API MediaExtractionConfiguration();
    AWS_QBUSINESS_API MediaExtractionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API MediaExtractionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration for extracting semantic meaning from images in documents.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/extracting-meaning-from-images.html">Extracting
     * semantic meaning from images and visuals</a>. </p>
     */
    inline const ImageExtractionConfiguration& GetImageExtractionConfiguration() const{ return m_imageExtractionConfiguration; }
    inline bool ImageExtractionConfigurationHasBeenSet() const { return m_imageExtractionConfigurationHasBeenSet; }
    inline void SetImageExtractionConfiguration(const ImageExtractionConfiguration& value) { m_imageExtractionConfigurationHasBeenSet = true; m_imageExtractionConfiguration = value; }
    inline void SetImageExtractionConfiguration(ImageExtractionConfiguration&& value) { m_imageExtractionConfigurationHasBeenSet = true; m_imageExtractionConfiguration = std::move(value); }
    inline MediaExtractionConfiguration& WithImageExtractionConfiguration(const ImageExtractionConfiguration& value) { SetImageExtractionConfiguration(value); return *this;}
    inline MediaExtractionConfiguration& WithImageExtractionConfiguration(ImageExtractionConfiguration&& value) { SetImageExtractionConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    ImageExtractionConfiguration m_imageExtractionConfiguration;
    bool m_imageExtractionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
