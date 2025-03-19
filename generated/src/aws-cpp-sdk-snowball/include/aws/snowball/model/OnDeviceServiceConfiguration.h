/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/model/NFSOnDeviceServiceConfiguration.h>
#include <aws/snowball/model/TGWOnDeviceServiceConfiguration.h>
#include <aws/snowball/model/EKSOnDeviceServiceConfiguration.h>
#include <aws/snowball/model/S3OnDeviceServiceConfiguration.h>
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
    AWS_SNOWBALL_API OnDeviceServiceConfiguration() = default;
    AWS_SNOWBALL_API OnDeviceServiceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API OnDeviceServiceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents the NFS (Network File System) service on a Snow Family device.</p>
     */
    inline const NFSOnDeviceServiceConfiguration& GetNFSOnDeviceService() const { return m_nFSOnDeviceService; }
    inline bool NFSOnDeviceServiceHasBeenSet() const { return m_nFSOnDeviceServiceHasBeenSet; }
    template<typename NFSOnDeviceServiceT = NFSOnDeviceServiceConfiguration>
    void SetNFSOnDeviceService(NFSOnDeviceServiceT&& value) { m_nFSOnDeviceServiceHasBeenSet = true; m_nFSOnDeviceService = std::forward<NFSOnDeviceServiceT>(value); }
    template<typename NFSOnDeviceServiceT = NFSOnDeviceServiceConfiguration>
    OnDeviceServiceConfiguration& WithNFSOnDeviceService(NFSOnDeviceServiceT&& value) { SetNFSOnDeviceService(std::forward<NFSOnDeviceServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the Storage Gateway service Tape Gateway type on a Snow Family
     * device.</p>
     */
    inline const TGWOnDeviceServiceConfiguration& GetTGWOnDeviceService() const { return m_tGWOnDeviceService; }
    inline bool TGWOnDeviceServiceHasBeenSet() const { return m_tGWOnDeviceServiceHasBeenSet; }
    template<typename TGWOnDeviceServiceT = TGWOnDeviceServiceConfiguration>
    void SetTGWOnDeviceService(TGWOnDeviceServiceT&& value) { m_tGWOnDeviceServiceHasBeenSet = true; m_tGWOnDeviceService = std::forward<TGWOnDeviceServiceT>(value); }
    template<typename TGWOnDeviceServiceT = TGWOnDeviceServiceConfiguration>
    OnDeviceServiceConfiguration& WithTGWOnDeviceService(TGWOnDeviceServiceT&& value) { SetTGWOnDeviceService(std::forward<TGWOnDeviceServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of EKS Anywhere on the Snow Family device.</p>
     */
    inline const EKSOnDeviceServiceConfiguration& GetEKSOnDeviceService() const { return m_eKSOnDeviceService; }
    inline bool EKSOnDeviceServiceHasBeenSet() const { return m_eKSOnDeviceServiceHasBeenSet; }
    template<typename EKSOnDeviceServiceT = EKSOnDeviceServiceConfiguration>
    void SetEKSOnDeviceService(EKSOnDeviceServiceT&& value) { m_eKSOnDeviceServiceHasBeenSet = true; m_eKSOnDeviceService = std::forward<EKSOnDeviceServiceT>(value); }
    template<typename EKSOnDeviceServiceT = EKSOnDeviceServiceConfiguration>
    OnDeviceServiceConfiguration& WithEKSOnDeviceService(EKSOnDeviceServiceT&& value) { SetEKSOnDeviceService(std::forward<EKSOnDeviceServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for Amazon S3 compatible storage on Snow family devices.</p>
     */
    inline const S3OnDeviceServiceConfiguration& GetS3OnDeviceService() const { return m_s3OnDeviceService; }
    inline bool S3OnDeviceServiceHasBeenSet() const { return m_s3OnDeviceServiceHasBeenSet; }
    template<typename S3OnDeviceServiceT = S3OnDeviceServiceConfiguration>
    void SetS3OnDeviceService(S3OnDeviceServiceT&& value) { m_s3OnDeviceServiceHasBeenSet = true; m_s3OnDeviceService = std::forward<S3OnDeviceServiceT>(value); }
    template<typename S3OnDeviceServiceT = S3OnDeviceServiceConfiguration>
    OnDeviceServiceConfiguration& WithS3OnDeviceService(S3OnDeviceServiceT&& value) { SetS3OnDeviceService(std::forward<S3OnDeviceServiceT>(value)); return *this;}
    ///@}
  private:

    NFSOnDeviceServiceConfiguration m_nFSOnDeviceService;
    bool m_nFSOnDeviceServiceHasBeenSet = false;

    TGWOnDeviceServiceConfiguration m_tGWOnDeviceService;
    bool m_tGWOnDeviceServiceHasBeenSet = false;

    EKSOnDeviceServiceConfiguration m_eKSOnDeviceService;
    bool m_eKSOnDeviceServiceHasBeenSet = false;

    S3OnDeviceServiceConfiguration m_s3OnDeviceService;
    bool m_s3OnDeviceServiceHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
