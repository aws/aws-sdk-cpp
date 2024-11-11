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
    AWS_OUTPOSTS_API AssetInstance();
    AWS_OUTPOSTS_API AssetInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API AssetInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline AssetInstance& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline AssetInstance& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline AssetInstance& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of instance.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline AssetInstance& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline AssetInstance& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline AssetInstance& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }
    inline AssetInstance& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}
    inline AssetInstance& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}
    inline AssetInstance& WithAssetId(const char* value) { SetAssetId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline AssetInstance& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline AssetInstance& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline AssetInstance& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services service name of the instance.</p>
     */
    inline const AWSServiceName& GetAwsServiceName() const{ return m_awsServiceName; }
    inline bool AwsServiceNameHasBeenSet() const { return m_awsServiceNameHasBeenSet; }
    inline void SetAwsServiceName(const AWSServiceName& value) { m_awsServiceNameHasBeenSet = true; m_awsServiceName = value; }
    inline void SetAwsServiceName(AWSServiceName&& value) { m_awsServiceNameHasBeenSet = true; m_awsServiceName = std::move(value); }
    inline AssetInstance& WithAwsServiceName(const AWSServiceName& value) { SetAwsServiceName(value); return *this;}
    inline AssetInstance& WithAwsServiceName(AWSServiceName&& value) { SetAwsServiceName(std::move(value)); return *this;}
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

    AWSServiceName m_awsServiceName;
    bool m_awsServiceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
