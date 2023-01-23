/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/FaceSearchSettings.h>
#include <aws/rekognition/model/ConnectedHomeSettings.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Input parameters used in a streaming video analyzed by a Amazon Rekognition
   * stream processor. You can use <code>FaceSearch</code> to recognize faces in a
   * streaming video, or you can use <code>ConnectedHome</code> to detect labels.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StreamProcessorSettings">AWS
   * API Reference</a></p>
   */
  class StreamProcessorSettings
  {
  public:
    AWS_REKOGNITION_API StreamProcessorSettings();
    AWS_REKOGNITION_API StreamProcessorSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API StreamProcessorSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Face search settings to use on a streaming video. </p>
     */
    inline const FaceSearchSettings& GetFaceSearch() const{ return m_faceSearch; }

    /**
     * <p>Face search settings to use on a streaming video. </p>
     */
    inline bool FaceSearchHasBeenSet() const { return m_faceSearchHasBeenSet; }

    /**
     * <p>Face search settings to use on a streaming video. </p>
     */
    inline void SetFaceSearch(const FaceSearchSettings& value) { m_faceSearchHasBeenSet = true; m_faceSearch = value; }

    /**
     * <p>Face search settings to use on a streaming video. </p>
     */
    inline void SetFaceSearch(FaceSearchSettings&& value) { m_faceSearchHasBeenSet = true; m_faceSearch = std::move(value); }

    /**
     * <p>Face search settings to use on a streaming video. </p>
     */
    inline StreamProcessorSettings& WithFaceSearch(const FaceSearchSettings& value) { SetFaceSearch(value); return *this;}

    /**
     * <p>Face search settings to use on a streaming video. </p>
     */
    inline StreamProcessorSettings& WithFaceSearch(FaceSearchSettings&& value) { SetFaceSearch(std::move(value)); return *this;}


    
    inline const ConnectedHomeSettings& GetConnectedHome() const{ return m_connectedHome; }

    
    inline bool ConnectedHomeHasBeenSet() const { return m_connectedHomeHasBeenSet; }

    
    inline void SetConnectedHome(const ConnectedHomeSettings& value) { m_connectedHomeHasBeenSet = true; m_connectedHome = value; }

    
    inline void SetConnectedHome(ConnectedHomeSettings&& value) { m_connectedHomeHasBeenSet = true; m_connectedHome = std::move(value); }

    
    inline StreamProcessorSettings& WithConnectedHome(const ConnectedHomeSettings& value) { SetConnectedHome(value); return *this;}

    
    inline StreamProcessorSettings& WithConnectedHome(ConnectedHomeSettings&& value) { SetConnectedHome(std::move(value)); return *this;}

  private:

    FaceSearchSettings m_faceSearch;
    bool m_faceSearchHasBeenSet = false;

    ConnectedHomeSettings m_connectedHome;
    bool m_connectedHomeHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
