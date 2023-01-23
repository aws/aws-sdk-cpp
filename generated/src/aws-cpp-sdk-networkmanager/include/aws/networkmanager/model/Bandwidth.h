/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>

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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes bandwidth information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/Bandwidth">AWS
   * API Reference</a></p>
   */
  class Bandwidth
  {
  public:
    AWS_NETWORKMANAGER_API Bandwidth();
    AWS_NETWORKMANAGER_API Bandwidth(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Bandwidth& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Upload speed in Mbps.</p>
     */
    inline int GetUploadSpeed() const{ return m_uploadSpeed; }

    /**
     * <p>Upload speed in Mbps.</p>
     */
    inline bool UploadSpeedHasBeenSet() const { return m_uploadSpeedHasBeenSet; }

    /**
     * <p>Upload speed in Mbps.</p>
     */
    inline void SetUploadSpeed(int value) { m_uploadSpeedHasBeenSet = true; m_uploadSpeed = value; }

    /**
     * <p>Upload speed in Mbps.</p>
     */
    inline Bandwidth& WithUploadSpeed(int value) { SetUploadSpeed(value); return *this;}


    /**
     * <p>Download speed in Mbps.</p>
     */
    inline int GetDownloadSpeed() const{ return m_downloadSpeed; }

    /**
     * <p>Download speed in Mbps.</p>
     */
    inline bool DownloadSpeedHasBeenSet() const { return m_downloadSpeedHasBeenSet; }

    /**
     * <p>Download speed in Mbps.</p>
     */
    inline void SetDownloadSpeed(int value) { m_downloadSpeedHasBeenSet = true; m_downloadSpeed = value; }

    /**
     * <p>Download speed in Mbps.</p>
     */
    inline Bandwidth& WithDownloadSpeed(int value) { SetDownloadSpeed(value); return *this;}

  private:

    int m_uploadSpeed;
    bool m_uploadSpeedHasBeenSet = false;

    int m_downloadSpeed;
    bool m_downloadSpeedHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
