﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/privatenetworks/model/NetworkStatus.h>
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
namespace PrivateNetworks
{
namespace Model
{

  /**
   * <p>Information about a network.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/Network">AWS
   * API Reference</a></p>
   */
  class Network
  {
  public:
    AWS_PRIVATENETWORKS_API Network();
    AWS_PRIVATENETWORKS_API Network(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API Network& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The creation time of the network.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Network& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Network& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the network.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Network& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Network& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Network& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the network.</p>
     */
    inline const Aws::String& GetNetworkArn() const{ return m_networkArn; }
    inline bool NetworkArnHasBeenSet() const { return m_networkArnHasBeenSet; }
    inline void SetNetworkArn(const Aws::String& value) { m_networkArnHasBeenSet = true; m_networkArn = value; }
    inline void SetNetworkArn(Aws::String&& value) { m_networkArnHasBeenSet = true; m_networkArn = std::move(value); }
    inline void SetNetworkArn(const char* value) { m_networkArnHasBeenSet = true; m_networkArn.assign(value); }
    inline Network& WithNetworkArn(const Aws::String& value) { SetNetworkArn(value); return *this;}
    inline Network& WithNetworkArn(Aws::String&& value) { SetNetworkArn(std::move(value)); return *this;}
    inline Network& WithNetworkArn(const char* value) { SetNetworkArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the network.</p>
     */
    inline const Aws::String& GetNetworkName() const{ return m_networkName; }
    inline bool NetworkNameHasBeenSet() const { return m_networkNameHasBeenSet; }
    inline void SetNetworkName(const Aws::String& value) { m_networkNameHasBeenSet = true; m_networkName = value; }
    inline void SetNetworkName(Aws::String&& value) { m_networkNameHasBeenSet = true; m_networkName = std::move(value); }
    inline void SetNetworkName(const char* value) { m_networkNameHasBeenSet = true; m_networkName.assign(value); }
    inline Network& WithNetworkName(const Aws::String& value) { SetNetworkName(value); return *this;}
    inline Network& WithNetworkName(Aws::String&& value) { SetNetworkName(std::move(value)); return *this;}
    inline Network& WithNetworkName(const char* value) { SetNetworkName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the network.</p>
     */
    inline const NetworkStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const NetworkStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(NetworkStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Network& WithStatus(const NetworkStatus& value) { SetStatus(value); return *this;}
    inline Network& WithStatus(NetworkStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status reason of the network.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline Network& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline Network& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline Network& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_networkArn;
    bool m_networkArnHasBeenSet = false;

    Aws::String m_networkName;
    bool m_networkNameHasBeenSet = false;

    NetworkStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
