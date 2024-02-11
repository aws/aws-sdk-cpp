/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/model/CommitmentConfiguration.h>
#include <aws/privatenetworks/model/NetworkResourceDefinitionType.h>
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
   * <p>Details of the network resources in the order.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/OrderedResourceDefinition">AWS
   * API Reference</a></p>
   */
  class OrderedResourceDefinition
  {
  public:
    AWS_PRIVATENETWORKS_API OrderedResourceDefinition();
    AWS_PRIVATENETWORKS_API OrderedResourceDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API OrderedResourceDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The duration and renewal status of the commitment period for each radio unit
     * in the order. Does not show details if the resource type is
     * DEVICE_IDENTIFIER.</p>
     */
    inline const CommitmentConfiguration& GetCommitmentConfiguration() const{ return m_commitmentConfiguration; }

    /**
     * <p>The duration and renewal status of the commitment period for each radio unit
     * in the order. Does not show details if the resource type is
     * DEVICE_IDENTIFIER.</p>
     */
    inline bool CommitmentConfigurationHasBeenSet() const { return m_commitmentConfigurationHasBeenSet; }

    /**
     * <p>The duration and renewal status of the commitment period for each radio unit
     * in the order. Does not show details if the resource type is
     * DEVICE_IDENTIFIER.</p>
     */
    inline void SetCommitmentConfiguration(const CommitmentConfiguration& value) { m_commitmentConfigurationHasBeenSet = true; m_commitmentConfiguration = value; }

    /**
     * <p>The duration and renewal status of the commitment period for each radio unit
     * in the order. Does not show details if the resource type is
     * DEVICE_IDENTIFIER.</p>
     */
    inline void SetCommitmentConfiguration(CommitmentConfiguration&& value) { m_commitmentConfigurationHasBeenSet = true; m_commitmentConfiguration = std::move(value); }

    /**
     * <p>The duration and renewal status of the commitment period for each radio unit
     * in the order. Does not show details if the resource type is
     * DEVICE_IDENTIFIER.</p>
     */
    inline OrderedResourceDefinition& WithCommitmentConfiguration(const CommitmentConfiguration& value) { SetCommitmentConfiguration(value); return *this;}

    /**
     * <p>The duration and renewal status of the commitment period for each radio unit
     * in the order. Does not show details if the resource type is
     * DEVICE_IDENTIFIER.</p>
     */
    inline OrderedResourceDefinition& WithCommitmentConfiguration(CommitmentConfiguration&& value) { SetCommitmentConfiguration(std::move(value)); return *this;}


    /**
     * <p>The number of network resources in the order.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The number of network resources in the order.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The number of network resources in the order.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of network resources in the order.</p>
     */
    inline OrderedResourceDefinition& WithCount(int value) { SetCount(value); return *this;}


    /**
     * <p>The type of network resource in the order.</p>
     */
    inline const NetworkResourceDefinitionType& GetType() const{ return m_type; }

    /**
     * <p>The type of network resource in the order.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of network resource in the order.</p>
     */
    inline void SetType(const NetworkResourceDefinitionType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of network resource in the order.</p>
     */
    inline void SetType(NetworkResourceDefinitionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of network resource in the order.</p>
     */
    inline OrderedResourceDefinition& WithType(const NetworkResourceDefinitionType& value) { SetType(value); return *this;}

    /**
     * <p>The type of network resource in the order.</p>
     */
    inline OrderedResourceDefinition& WithType(NetworkResourceDefinitionType&& value) { SetType(std::move(value)); return *this;}

  private:

    CommitmentConfiguration m_commitmentConfiguration;
    bool m_commitmentConfigurationHasBeenSet = false;

    int m_count;
    bool m_countHasBeenSet = false;

    NetworkResourceDefinitionType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
