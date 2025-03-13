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
    AWS_NETWORKMANAGER_API PathComponent() = default;
    AWS_NETWORKMANAGER_API PathComponent(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API PathComponent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The sequence number in the path. The destination is 0.</p>
     */
    inline int GetSequence() const { return m_sequence; }
    inline bool SequenceHasBeenSet() const { return m_sequenceHasBeenSet; }
    inline void SetSequence(int value) { m_sequenceHasBeenSet = true; m_sequence = value; }
    inline PathComponent& WithSequence(int value) { SetSequence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource.</p>
     */
    inline const NetworkResourceSummary& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = NetworkResourceSummary>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = NetworkResourceSummary>
    PathComponent& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination CIDR block in the route table.</p>
     */
    inline const Aws::String& GetDestinationCidrBlock() const { return m_destinationCidrBlock; }
    inline bool DestinationCidrBlockHasBeenSet() const { return m_destinationCidrBlockHasBeenSet; }
    template<typename DestinationCidrBlockT = Aws::String>
    void SetDestinationCidrBlock(DestinationCidrBlockT&& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = std::forward<DestinationCidrBlockT>(value); }
    template<typename DestinationCidrBlockT = Aws::String>
    PathComponent& WithDestinationCidrBlock(DestinationCidrBlockT&& value) { SetDestinationCidrBlock(std::forward<DestinationCidrBlockT>(value)); return *this;}
    ///@}
  private:

    int m_sequence{0};
    bool m_sequenceHasBeenSet = false;

    NetworkResourceSummary m_resource;
    bool m_resourceHasBeenSet = false;

    Aws::String m_destinationCidrBlock;
    bool m_destinationCidrBlockHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
