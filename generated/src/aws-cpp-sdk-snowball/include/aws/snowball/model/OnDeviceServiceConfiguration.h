/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/model/NFSOnDeviceServiceConfiguration.h>
#include <aws/snowball/model/TGWOnDeviceServiceConfiguration.h>
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
namespace Snowball
{
namespace Model
{

  /**
   * <p>An object that represents the metadata and configuration settings for
   * services on an Amazon Web Services Snow Family device.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/OnDeviceServiceConfiguration">AWS
   * API Reference</a></p>
   */
  class OnDeviceServiceConfiguration
  {
  public:
    AWS_SNOWBALL_API OnDeviceServiceConfiguration();
    AWS_SNOWBALL_API OnDeviceServiceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API OnDeviceServiceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Represents the NFS (Network File System) service on a Snow Family device.</p>
     */
    inline const NFSOnDeviceServiceConfiguration& GetNFSOnDeviceService() const{ return m_nFSOnDeviceService; }

    /**
     * <p>Represents the NFS (Network File System) service on a Snow Family device.</p>
     */
    inline bool NFSOnDeviceServiceHasBeenSet() const { return m_nFSOnDeviceServiceHasBeenSet; }

    /**
     * <p>Represents the NFS (Network File System) service on a Snow Family device.</p>
     */
    inline void SetNFSOnDeviceService(const NFSOnDeviceServiceConfiguration& value) { m_nFSOnDeviceServiceHasBeenSet = true; m_nFSOnDeviceService = value; }

    /**
     * <p>Represents the NFS (Network File System) service on a Snow Family device.</p>
     */
    inline void SetNFSOnDeviceService(NFSOnDeviceServiceConfiguration&& value) { m_nFSOnDeviceServiceHasBeenSet = true; m_nFSOnDeviceService = std::move(value); }

    /**
     * <p>Represents the NFS (Network File System) service on a Snow Family device.</p>
     */
    inline OnDeviceServiceConfiguration& WithNFSOnDeviceService(const NFSOnDeviceServiceConfiguration& value) { SetNFSOnDeviceService(value); return *this;}

    /**
     * <p>Represents the NFS (Network File System) service on a Snow Family device.</p>
     */
    inline OnDeviceServiceConfiguration& WithNFSOnDeviceService(NFSOnDeviceServiceConfiguration&& value) { SetNFSOnDeviceService(std::move(value)); return *this;}


    /**
     * <p>Represents the Storage Gateway service Tape Gateway type on a Snow Family
     * device.</p>
     */
    inline const TGWOnDeviceServiceConfiguration& GetTGWOnDeviceService() const{ return m_tGWOnDeviceService; }

    /**
     * <p>Represents the Storage Gateway service Tape Gateway type on a Snow Family
     * device.</p>
     */
    inline bool TGWOnDeviceServiceHasBeenSet() const { return m_tGWOnDeviceServiceHasBeenSet; }

    /**
     * <p>Represents the Storage Gateway service Tape Gateway type on a Snow Family
     * device.</p>
     */
    inline void SetTGWOnDeviceService(const TGWOnDeviceServiceConfiguration& value) { m_tGWOnDeviceServiceHasBeenSet = true; m_tGWOnDeviceService = value; }

    /**
     * <p>Represents the Storage Gateway service Tape Gateway type on a Snow Family
     * device.</p>
     */
    inline void SetTGWOnDeviceService(TGWOnDeviceServiceConfiguration&& value) { m_tGWOnDeviceServiceHasBeenSet = true; m_tGWOnDeviceService = std::move(value); }

    /**
     * <p>Represents the Storage Gateway service Tape Gateway type on a Snow Family
     * device.</p>
     */
    inline OnDeviceServiceConfiguration& WithTGWOnDeviceService(const TGWOnDeviceServiceConfiguration& value) { SetTGWOnDeviceService(value); return *this;}

    /**
     * <p>Represents the Storage Gateway service Tape Gateway type on a Snow Family
     * device.</p>
     */
    inline OnDeviceServiceConfiguration& WithTGWOnDeviceService(TGWOnDeviceServiceConfiguration&& value) { SetTGWOnDeviceService(std::move(value)); return *this;}

  private:

    NFSOnDeviceServiceConfiguration m_nFSOnDeviceService;
    bool m_nFSOnDeviceServiceHasBeenSet = false;

    TGWOnDeviceServiceConfiguration m_tGWOnDeviceService;
    bool m_tGWOnDeviceServiceHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
