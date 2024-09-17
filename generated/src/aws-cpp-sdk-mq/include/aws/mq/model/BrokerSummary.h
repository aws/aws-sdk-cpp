/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/model/BrokerState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mq/model/DeploymentMode.h>
#include <aws/mq/model/EngineType.h>
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
namespace MQ
{
namespace Model
{

  /**
   * <p>Returns information about all brokers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/BrokerSummary">AWS
   * API Reference</a></p>
   */
  class BrokerSummary
  {
  public:
    AWS_MQ_API BrokerSummary();
    AWS_MQ_API BrokerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API BrokerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The broker's Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetBrokerArn() const{ return m_brokerArn; }
    inline bool BrokerArnHasBeenSet() const { return m_brokerArnHasBeenSet; }
    inline void SetBrokerArn(const Aws::String& value) { m_brokerArnHasBeenSet = true; m_brokerArn = value; }
    inline void SetBrokerArn(Aws::String&& value) { m_brokerArnHasBeenSet = true; m_brokerArn = std::move(value); }
    inline void SetBrokerArn(const char* value) { m_brokerArnHasBeenSet = true; m_brokerArn.assign(value); }
    inline BrokerSummary& WithBrokerArn(const Aws::String& value) { SetBrokerArn(value); return *this;}
    inline BrokerSummary& WithBrokerArn(Aws::String&& value) { SetBrokerArn(std::move(value)); return *this;}
    inline BrokerSummary& WithBrokerArn(const char* value) { SetBrokerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline const Aws::String& GetBrokerId() const{ return m_brokerId; }
    inline bool BrokerIdHasBeenSet() const { return m_brokerIdHasBeenSet; }
    inline void SetBrokerId(const Aws::String& value) { m_brokerIdHasBeenSet = true; m_brokerId = value; }
    inline void SetBrokerId(Aws::String&& value) { m_brokerIdHasBeenSet = true; m_brokerId = std::move(value); }
    inline void SetBrokerId(const char* value) { m_brokerIdHasBeenSet = true; m_brokerId.assign(value); }
    inline BrokerSummary& WithBrokerId(const Aws::String& value) { SetBrokerId(value); return *this;}
    inline BrokerSummary& WithBrokerId(Aws::String&& value) { SetBrokerId(std::move(value)); return *this;}
    inline BrokerSummary& WithBrokerId(const char* value) { SetBrokerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker's name. This value is unique in your Amazon Web Services account,
     * 1-50 characters long, and containing only letters, numbers, dashes, and
     * underscores, and must not contain white spaces, brackets, wildcard characters,
     * or special characters.</p>
     */
    inline const Aws::String& GetBrokerName() const{ return m_brokerName; }
    inline bool BrokerNameHasBeenSet() const { return m_brokerNameHasBeenSet; }
    inline void SetBrokerName(const Aws::String& value) { m_brokerNameHasBeenSet = true; m_brokerName = value; }
    inline void SetBrokerName(Aws::String&& value) { m_brokerNameHasBeenSet = true; m_brokerName = std::move(value); }
    inline void SetBrokerName(const char* value) { m_brokerNameHasBeenSet = true; m_brokerName.assign(value); }
    inline BrokerSummary& WithBrokerName(const Aws::String& value) { SetBrokerName(value); return *this;}
    inline BrokerSummary& WithBrokerName(Aws::String&& value) { SetBrokerName(std::move(value)); return *this;}
    inline BrokerSummary& WithBrokerName(const char* value) { SetBrokerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker's status.</p>
     */
    inline const BrokerState& GetBrokerState() const{ return m_brokerState; }
    inline bool BrokerStateHasBeenSet() const { return m_brokerStateHasBeenSet; }
    inline void SetBrokerState(const BrokerState& value) { m_brokerStateHasBeenSet = true; m_brokerState = value; }
    inline void SetBrokerState(BrokerState&& value) { m_brokerStateHasBeenSet = true; m_brokerState = std::move(value); }
    inline BrokerSummary& WithBrokerState(const BrokerState& value) { SetBrokerState(value); return *this;}
    inline BrokerSummary& WithBrokerState(BrokerState&& value) { SetBrokerState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the broker was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }
    inline BrokerSummary& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}
    inline BrokerSummary& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker's deployment mode.</p>
     */
    inline const DeploymentMode& GetDeploymentMode() const{ return m_deploymentMode; }
    inline bool DeploymentModeHasBeenSet() const { return m_deploymentModeHasBeenSet; }
    inline void SetDeploymentMode(const DeploymentMode& value) { m_deploymentModeHasBeenSet = true; m_deploymentMode = value; }
    inline void SetDeploymentMode(DeploymentMode&& value) { m_deploymentModeHasBeenSet = true; m_deploymentMode = std::move(value); }
    inline BrokerSummary& WithDeploymentMode(const DeploymentMode& value) { SetDeploymentMode(value); return *this;}
    inline BrokerSummary& WithDeploymentMode(DeploymentMode&& value) { SetDeploymentMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of broker engine.</p>
     */
    inline const EngineType& GetEngineType() const{ return m_engineType; }
    inline bool EngineTypeHasBeenSet() const { return m_engineTypeHasBeenSet; }
    inline void SetEngineType(const EngineType& value) { m_engineTypeHasBeenSet = true; m_engineType = value; }
    inline void SetEngineType(EngineType&& value) { m_engineTypeHasBeenSet = true; m_engineType = std::move(value); }
    inline BrokerSummary& WithEngineType(const EngineType& value) { SetEngineType(value); return *this;}
    inline BrokerSummary& WithEngineType(EngineType&& value) { SetEngineType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker's instance type.</p>
     */
    inline const Aws::String& GetHostInstanceType() const{ return m_hostInstanceType; }
    inline bool HostInstanceTypeHasBeenSet() const { return m_hostInstanceTypeHasBeenSet; }
    inline void SetHostInstanceType(const Aws::String& value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType = value; }
    inline void SetHostInstanceType(Aws::String&& value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType = std::move(value); }
    inline void SetHostInstanceType(const char* value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType.assign(value); }
    inline BrokerSummary& WithHostInstanceType(const Aws::String& value) { SetHostInstanceType(value); return *this;}
    inline BrokerSummary& WithHostInstanceType(Aws::String&& value) { SetHostInstanceType(std::move(value)); return *this;}
    inline BrokerSummary& WithHostInstanceType(const char* value) { SetHostInstanceType(value); return *this;}
    ///@}
  private:

    Aws::String m_brokerArn;
    bool m_brokerArnHasBeenSet = false;

    Aws::String m_brokerId;
    bool m_brokerIdHasBeenSet = false;

    Aws::String m_brokerName;
    bool m_brokerNameHasBeenSet = false;

    BrokerState m_brokerState;
    bool m_brokerStateHasBeenSet = false;

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet = false;

    DeploymentMode m_deploymentMode;
    bool m_deploymentModeHasBeenSet = false;

    EngineType m_engineType;
    bool m_engineTypeHasBeenSet = false;

    Aws::String m_hostInstanceType;
    bool m_hostInstanceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
