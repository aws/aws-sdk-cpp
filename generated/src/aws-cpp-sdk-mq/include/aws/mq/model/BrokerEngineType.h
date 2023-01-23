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
    AWS_MQ_API BrokerEngineType();
    AWS_MQ_API BrokerEngineType(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API BrokerEngineType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The broker's engine type.</p>
     */
    inline const EngineType& GetEngineType() const{ return m_engineType; }

    /**
     * <p>The broker's engine type.</p>
     */
    inline bool EngineTypeHasBeenSet() const { return m_engineTypeHasBeenSet; }

    /**
     * <p>The broker's engine type.</p>
     */
    inline void SetEngineType(const EngineType& value) { m_engineTypeHasBeenSet = true; m_engineType = value; }

    /**
     * <p>The broker's engine type.</p>
     */
    inline void SetEngineType(EngineType&& value) { m_engineTypeHasBeenSet = true; m_engineType = std::move(value); }

    /**
     * <p>The broker's engine type.</p>
     */
    inline BrokerEngineType& WithEngineType(const EngineType& value) { SetEngineType(value); return *this;}

    /**
     * <p>The broker's engine type.</p>
     */
    inline BrokerEngineType& WithEngineType(EngineType&& value) { SetEngineType(std::move(value)); return *this;}


    /**
     * <p>The list of engine versions.</p>
     */
    inline const Aws::Vector<EngineVersion>& GetEngineVersions() const{ return m_engineVersions; }

    /**
     * <p>The list of engine versions.</p>
     */
    inline bool EngineVersionsHasBeenSet() const { return m_engineVersionsHasBeenSet; }

    /**
     * <p>The list of engine versions.</p>
     */
    inline void SetEngineVersions(const Aws::Vector<EngineVersion>& value) { m_engineVersionsHasBeenSet = true; m_engineVersions = value; }

    /**
     * <p>The list of engine versions.</p>
     */
    inline void SetEngineVersions(Aws::Vector<EngineVersion>&& value) { m_engineVersionsHasBeenSet = true; m_engineVersions = std::move(value); }

    /**
     * <p>The list of engine versions.</p>
     */
    inline BrokerEngineType& WithEngineVersions(const Aws::Vector<EngineVersion>& value) { SetEngineVersions(value); return *this;}

    /**
     * <p>The list of engine versions.</p>
     */
    inline BrokerEngineType& WithEngineVersions(Aws::Vector<EngineVersion>&& value) { SetEngineVersions(std::move(value)); return *this;}

    /**
     * <p>The list of engine versions.</p>
     */
    inline BrokerEngineType& AddEngineVersions(const EngineVersion& value) { m_engineVersionsHasBeenSet = true; m_engineVersions.push_back(value); return *this; }

    /**
     * <p>The list of engine versions.</p>
     */
    inline BrokerEngineType& AddEngineVersions(EngineVersion&& value) { m_engineVersionsHasBeenSet = true; m_engineVersions.push_back(std::move(value)); return *this; }

  private:

    EngineType m_engineType;
    bool m_engineTypeHasBeenSet = false;

    Aws::Vector<EngineVersion> m_engineVersions;
    bool m_engineVersionsHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
