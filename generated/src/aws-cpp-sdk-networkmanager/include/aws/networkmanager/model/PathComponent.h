/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/NetworkResourceSummary.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes a path component.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/PathComponent">AWS
   * API Reference</a></p>
   */
  class PathComponent
  {
  public:
    AWS_NETWORKMANAGER_API PathComponent();
    AWS_NETWORKMANAGER_API PathComponent(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API PathComponent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The sequence number in the path. The destination is 0.</p>
     */
    inline int GetSequence() const{ return m_sequence; }

    /**
     * <p>The sequence number in the path. The destination is 0.</p>
     */
    inline bool SequenceHasBeenSet() const { return m_sequenceHasBeenSet; }

    /**
     * <p>The sequence number in the path. The destination is 0.</p>
     */
    inline void SetSequence(int value) { m_sequenceHasBeenSet = true; m_sequence = value; }

    /**
     * <p>The sequence number in the path. The destination is 0.</p>
     */
    inline PathComponent& WithSequence(int value) { SetSequence(value); return *this;}


    /**
     * <p>The resource.</p>
     */
    inline const NetworkResourceSummary& GetResource() const{ return m_resource; }

    /**
     * <p>The resource.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The resource.</p>
     */
    inline void SetResource(const NetworkResourceSummary& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The resource.</p>
     */
    inline void SetResource(NetworkResourceSummary&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The resource.</p>
     */
    inline PathComponent& WithResource(const NetworkResourceSummary& value) { SetResource(value); return *this;}

    /**
     * <p>The resource.</p>
     */
    inline PathComponent& WithResource(NetworkResourceSummary&& value) { SetResource(std::move(value)); return *this;}


    /**
     * <p>The destination CIDR block in the route table.</p>
     */
    inline const Aws::String& GetDestinationCidrBlock() const{ return m_destinationCidrBlock; }

    /**
     * <p>The destination CIDR block in the route table.</p>
     */
    inline bool DestinationCidrBlockHasBeenSet() const { return m_destinationCidrBlockHasBeenSet; }

    /**
     * <p>The destination CIDR block in the route table.</p>
     */
    inline void SetDestinationCidrBlock(const Aws::String& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = value; }

    /**
     * <p>The destination CIDR block in the route table.</p>
     */
    inline void SetDestinationCidrBlock(Aws::String&& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = std::move(value); }

    /**
     * <p>The destination CIDR block in the route table.</p>
     */
    inline void SetDestinationCidrBlock(const char* value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock.assign(value); }

    /**
     * <p>The destination CIDR block in the route table.</p>
     */
    inline PathComponent& WithDestinationCidrBlock(const Aws::String& value) { SetDestinationCidrBlock(value); return *this;}

    /**
     * <p>The destination CIDR block in the route table.</p>
     */
    inline PathComponent& WithDestinationCidrBlock(Aws::String&& value) { SetDestinationCidrBlock(std::move(value)); return *this;}

    /**
     * <p>The destination CIDR block in the route table.</p>
     */
    inline PathComponent& WithDestinationCidrBlock(const char* value) { SetDestinationCidrBlock(value); return *this;}

  private:

    int m_sequence;
    bool m_sequenceHasBeenSet = false;

    NetworkResourceSummary m_resource;
    bool m_resourceHasBeenSet = false;

    Aws::String m_destinationCidrBlock;
    bool m_destinationCidrBlockHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
