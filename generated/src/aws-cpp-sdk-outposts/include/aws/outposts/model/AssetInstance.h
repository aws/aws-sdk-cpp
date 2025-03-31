/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/AWSServiceName.h>
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
namespace Outposts
{
namespace Model
{

  /**
   * <p>An Amazon EC2 instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/AssetInstance">AWS
   * API Reference</a></p>
   */
  class AssetInstance
  {
  public:
    AWS_OUTPOSTS_API AssetInstance() = default;
    AWS_OUTPOSTS_API AssetInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API AssetInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    AssetInstance& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of instance.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    AssetInstance& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset. An Outpost asset can be a single server within an
     * Outposts rack or an Outposts server configuration.</p>
     */
    inline const Aws::String& GetAssetId() const { return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    template<typename AssetIdT = Aws::String>
    void SetAssetId(AssetIdT&& value) { m_assetIdHasBeenSet = true; m_assetId = std::forward<AssetIdT>(value); }
    template<typename AssetIdT = Aws::String>
    AssetInstance& WithAssetId(AssetIdT&& value) { SetAssetId(std::forward<AssetIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    AssetInstance& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services service name of the instance.</p>
     */
    inline AWSServiceName GetAwsServiceName() const { return m_awsServiceName; }
    inline bool AwsServiceNameHasBeenSet() const { return m_awsServiceNameHasBeenSet; }
    inline void SetAwsServiceName(AWSServiceName value) { m_awsServiceNameHasBeenSet = true; m_awsServiceName = value; }
    inline AssetInstance& WithAwsServiceName(AWSServiceName value) { SetAwsServiceName(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    AWSServiceName m_awsServiceName{AWSServiceName::NOT_SET};
    bool m_awsServiceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
