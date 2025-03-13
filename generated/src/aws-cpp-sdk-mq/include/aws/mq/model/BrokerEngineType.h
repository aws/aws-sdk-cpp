/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/model/EngineType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mq/model/EngineVersion.h>
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
   * <p>Types of broker engines.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/BrokerEngineType">AWS
   * API Reference</a></p>
   */
  class BrokerEngineType
  {
  public:
    AWS_MQ_API BrokerEngineType() = default;
    AWS_MQ_API BrokerEngineType(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API BrokerEngineType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The broker's engine type.</p>
     */
    inline EngineType GetEngineType() const { return m_engineType; }
    inline bool EngineTypeHasBeenSet() const { return m_engineTypeHasBeenSet; }
    inline void SetEngineType(EngineType value) { m_engineTypeHasBeenSet = true; m_engineType = value; }
    inline BrokerEngineType& WithEngineType(EngineType value) { SetEngineType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of engine versions.</p>
     */
    inline const Aws::Vector<EngineVersion>& GetEngineVersions() const { return m_engineVersions; }
    inline bool EngineVersionsHasBeenSet() const { return m_engineVersionsHasBeenSet; }
    template<typename EngineVersionsT = Aws::Vector<EngineVersion>>
    void SetEngineVersions(EngineVersionsT&& value) { m_engineVersionsHasBeenSet = true; m_engineVersions = std::forward<EngineVersionsT>(value); }
    template<typename EngineVersionsT = Aws::Vector<EngineVersion>>
    BrokerEngineType& WithEngineVersions(EngineVersionsT&& value) { SetEngineVersions(std::forward<EngineVersionsT>(value)); return *this;}
    template<typename EngineVersionsT = EngineVersion>
    BrokerEngineType& AddEngineVersions(EngineVersionsT&& value) { m_engineVersionsHasBeenSet = true; m_engineVersions.emplace_back(std::forward<EngineVersionsT>(value)); return *this; }
    ///@}
  private:

    EngineType m_engineType{EngineType::NOT_SET};
    bool m_engineTypeHasBeenSet = false;

    Aws::Vector<EngineVersion> m_engineVersions;
    bool m_engineVersionsHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
