/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/NielsenPcmToId3TaggingState.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Nielsen Configuration<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/NielsenConfiguration">AWS
   * API Reference</a></p>
   */
  class NielsenConfiguration
  {
  public:
    AWS_MEDIALIVE_API NielsenConfiguration();
    AWS_MEDIALIVE_API NielsenConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API NielsenConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Enter the Distributor ID assigned to your organization by Nielsen.
     */
    inline const Aws::String& GetDistributorId() const{ return m_distributorId; }

    /**
     * Enter the Distributor ID assigned to your organization by Nielsen.
     */
    inline bool DistributorIdHasBeenSet() const { return m_distributorIdHasBeenSet; }

    /**
     * Enter the Distributor ID assigned to your organization by Nielsen.
     */
    inline void SetDistributorId(const Aws::String& value) { m_distributorIdHasBeenSet = true; m_distributorId = value; }

    /**
     * Enter the Distributor ID assigned to your organization by Nielsen.
     */
    inline void SetDistributorId(Aws::String&& value) { m_distributorIdHasBeenSet = true; m_distributorId = std::move(value); }

    /**
     * Enter the Distributor ID assigned to your organization by Nielsen.
     */
    inline void SetDistributorId(const char* value) { m_distributorIdHasBeenSet = true; m_distributorId.assign(value); }

    /**
     * Enter the Distributor ID assigned to your organization by Nielsen.
     */
    inline NielsenConfiguration& WithDistributorId(const Aws::String& value) { SetDistributorId(value); return *this;}

    /**
     * Enter the Distributor ID assigned to your organization by Nielsen.
     */
    inline NielsenConfiguration& WithDistributorId(Aws::String&& value) { SetDistributorId(std::move(value)); return *this;}

    /**
     * Enter the Distributor ID assigned to your organization by Nielsen.
     */
    inline NielsenConfiguration& WithDistributorId(const char* value) { SetDistributorId(value); return *this;}


    /**
     * Enables Nielsen PCM to ID3 tagging
     */
    inline const NielsenPcmToId3TaggingState& GetNielsenPcmToId3Tagging() const{ return m_nielsenPcmToId3Tagging; }

    /**
     * Enables Nielsen PCM to ID3 tagging
     */
    inline bool NielsenPcmToId3TaggingHasBeenSet() const { return m_nielsenPcmToId3TaggingHasBeenSet; }

    /**
     * Enables Nielsen PCM to ID3 tagging
     */
    inline void SetNielsenPcmToId3Tagging(const NielsenPcmToId3TaggingState& value) { m_nielsenPcmToId3TaggingHasBeenSet = true; m_nielsenPcmToId3Tagging = value; }

    /**
     * Enables Nielsen PCM to ID3 tagging
     */
    inline void SetNielsenPcmToId3Tagging(NielsenPcmToId3TaggingState&& value) { m_nielsenPcmToId3TaggingHasBeenSet = true; m_nielsenPcmToId3Tagging = std::move(value); }

    /**
     * Enables Nielsen PCM to ID3 tagging
     */
    inline NielsenConfiguration& WithNielsenPcmToId3Tagging(const NielsenPcmToId3TaggingState& value) { SetNielsenPcmToId3Tagging(value); return *this;}

    /**
     * Enables Nielsen PCM to ID3 tagging
     */
    inline NielsenConfiguration& WithNielsenPcmToId3Tagging(NielsenPcmToId3TaggingState&& value) { SetNielsenPcmToId3Tagging(std::move(value)); return *this;}

  private:

    Aws::String m_distributorId;
    bool m_distributorIdHasBeenSet = false;

    NielsenPcmToId3TaggingState m_nielsenPcmToId3Tagging;
    bool m_nielsenPcmToId3TaggingHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
