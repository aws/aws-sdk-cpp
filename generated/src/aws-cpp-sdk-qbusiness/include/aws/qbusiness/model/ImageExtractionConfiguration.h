/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/ImageExtractionStatus.h>
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
   * <p>The configuration for extracting semantic meaning from images in documents.
   * For more information, see <a
   * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/extracting-meaning-from-images.html">Extracting
   * semantic meaning from images and visuals</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ImageExtractionConfiguration">AWS
   * API Reference</a></p>
   */
  class ImageExtractionConfiguration
  {
  public:
    AWS_QBUSINESS_API ImageExtractionConfiguration() = default;
    AWS_QBUSINESS_API ImageExtractionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API ImageExtractionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify whether to extract semantic meaning from images and visuals from
     * documents.</p>
     */
    inline ImageExtractionStatus GetImageExtractionStatus() const { return m_imageExtractionStatus; }
    inline bool ImageExtractionStatusHasBeenSet() const { return m_imageExtractionStatusHasBeenSet; }
    inline void SetImageExtractionStatus(ImageExtractionStatus value) { m_imageExtractionStatusHasBeenSet = true; m_imageExtractionStatus = value; }
    inline ImageExtractionConfiguration& WithImageExtractionStatus(ImageExtractionStatus value) { SetImageExtractionStatus(value); return *this;}
    ///@}
  private:

    ImageExtractionStatus m_imageExtractionStatus{ImageExtractionStatus::NOT_SET};
    bool m_imageExtractionStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
