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
    AWS_MQ_API BrokerSummary() = default;
    AWS_MQ_API BrokerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API BrokerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The broker's Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetBrokerArn() const { return m_brokerArn; }
    inline bool BrokerArnHasBeenSet() const { return m_brokerArnHasBeenSet; }
    template<typename BrokerArnT = Aws::String>
    void SetBrokerArn(BrokerArnT&& value) { m_brokerArnHasBeenSet = true; m_brokerArn = std::forward<BrokerArnT>(value); }
    template<typename BrokerArnT = Aws::String>
    BrokerSummary& WithBrokerArn(BrokerArnT&& value) { SetBrokerArn(std::forward<BrokerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline const Aws::String& GetBrokerId() const { return m_brokerId; }
    inline bool BrokerIdHasBeenSet() const { return m_brokerIdHasBeenSet; }
    template<typename BrokerIdT = Aws::String>
    void SetBrokerId(BrokerIdT&& value) { m_brokerIdHasBeenSet = true; m_brokerId = std::forward<BrokerIdT>(value); }
    template<typename BrokerIdT = Aws::String>
    BrokerSummary& WithBrokerId(BrokerIdT&& value) { SetBrokerId(std::forward<BrokerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker's name. This value is unique in your Amazon Web Services account,
     * 1-50 characters long, and containing only letters, numbers, dashes, and
     * underscores, and must not contain white spaces, brackets, wildcard characters,
     * or special characters.</p>
     */
    inline const Aws::String& GetBrokerName() const { return m_brokerName; }
    inline bool BrokerNameHasBeenSet() const { return m_brokerNameHasBeenSet; }
    template<typename BrokerNameT = Aws::String>
    void SetBrokerName(BrokerNameT&& value) { m_brokerNameHasBeenSet = true; m_brokerName = std::forward<BrokerNameT>(value); }
    template<typename BrokerNameT = Aws::String>
    BrokerSummary& WithBrokerName(BrokerNameT&& value) { SetBrokerName(std::forward<BrokerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker's status.</p>
     */
    inline BrokerState GetBrokerState() const { return m_brokerState; }
    inline bool BrokerStateHasBeenSet() const { return m_brokerStateHasBeenSet; }
    inline void SetBrokerState(BrokerState value) { m_brokerStateHasBeenSet = true; m_brokerState = value; }
    inline BrokerSummary& WithBrokerState(BrokerState value) { SetBrokerState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the broker was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const { return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    template<typename CreatedT = Aws::Utils::DateTime>
    void SetCreated(CreatedT&& value) { m_createdHasBeenSet = true; m_created = std::forward<CreatedT>(value); }
    template<typename CreatedT = Aws::Utils::DateTime>
    BrokerSummary& WithCreated(CreatedT&& value) { SetCreated(std::forward<CreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker's deployment mode.</p>
     */
    inline DeploymentMode GetDeploymentMode() const { return m_deploymentMode; }
    inline bool DeploymentModeHasBeenSet() const { return m_deploymentModeHasBeenSet; }
    inline void SetDeploymentMode(DeploymentMode value) { m_deploymentModeHasBeenSet = true; m_deploymentMode = value; }
    inline BrokerSummary& WithDeploymentMode(DeploymentMode value) { SetDeploymentMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of broker engine.</p>
     */
    inline EngineType GetEngineType() const { return m_engineType; }
    inline bool EngineTypeHasBeenSet() const { return m_engineTypeHasBeenSet; }
    inline void SetEngineType(EngineType value) { m_engineTypeHasBeenSet = true; m_engineType = value; }
    inline BrokerSummary& WithEngineType(EngineType value) { SetEngineType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker's instance type.</p>
     */
    inline const Aws::String& GetHostInstanceType() const { return m_hostInstanceType; }
    inline bool HostInstanceTypeHasBeenSet() const { return m_hostInstanceTypeHasBeenSet; }
    template<typename HostInstanceTypeT = Aws::String>
    void SetHostInstanceType(HostInstanceTypeT&& value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType = std::forward<HostInstanceTypeT>(value); }
    template<typename HostInstanceTypeT = Aws::String>
    BrokerSummary& WithHostInstanceType(HostInstanceTypeT&& value) { SetHostInstanceType(std::forward<HostInstanceTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_brokerArn;
    bool m_brokerArnHasBeenSet = false;

    Aws::String m_brokerId;
    bool m_brokerIdHasBeenSet = false;

    Aws::String m_brokerName;
    bool m_brokerNameHasBeenSet = false;

    BrokerState m_brokerState{BrokerState::NOT_SET};
    bool m_brokerStateHasBeenSet = false;

    Aws::Utils::DateTime m_created{};
    bool m_createdHasBeenSet = false;

    DeploymentMode m_deploymentMode{DeploymentMode::NOT_SET};
    bool m_deploymentModeHasBeenSet = false;

    EngineType m_engineType{EngineType::NOT_SET};
    bool m_engineTypeHasBeenSet = false;

    Aws::String m_hostInstanceType;
    bool m_hostInstanceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
