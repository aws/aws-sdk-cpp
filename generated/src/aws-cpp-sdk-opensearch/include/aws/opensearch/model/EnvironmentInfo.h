/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/AvailabilityZoneInfo.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Information about the active domain environment.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/EnvironmentInfo">AWS
   * API Reference</a></p>
   */
  class EnvironmentInfo
  {
  public:
    AWS_OPENSEARCHSERVICE_API EnvironmentInfo();
    AWS_OPENSEARCHSERVICE_API EnvironmentInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API EnvironmentInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A list of <code>AvailabilityZoneInfo</code> for the domain.</p>
     */
    inline const Aws::Vector<AvailabilityZoneInfo>& GetAvailabilityZoneInformation() const{ return m_availabilityZoneInformation; }

    /**
     * <p> A list of <code>AvailabilityZoneInfo</code> for the domain.</p>
     */
    inline bool AvailabilityZoneInformationHasBeenSet() const { return m_availabilityZoneInformationHasBeenSet; }

    /**
     * <p> A list of <code>AvailabilityZoneInfo</code> for the domain.</p>
     */
    inline void SetAvailabilityZoneInformation(const Aws::Vector<AvailabilityZoneInfo>& value) { m_availabilityZoneInformationHasBeenSet = true; m_availabilityZoneInformation = value; }

    /**
     * <p> A list of <code>AvailabilityZoneInfo</code> for the domain.</p>
     */
    inline void SetAvailabilityZoneInformation(Aws::Vector<AvailabilityZoneInfo>&& value) { m_availabilityZoneInformationHasBeenSet = true; m_availabilityZoneInformation = std::move(value); }

    /**
     * <p> A list of <code>AvailabilityZoneInfo</code> for the domain.</p>
     */
    inline EnvironmentInfo& WithAvailabilityZoneInformation(const Aws::Vector<AvailabilityZoneInfo>& value) { SetAvailabilityZoneInformation(value); return *this;}

    /**
     * <p> A list of <code>AvailabilityZoneInfo</code> for the domain.</p>
     */
    inline EnvironmentInfo& WithAvailabilityZoneInformation(Aws::Vector<AvailabilityZoneInfo>&& value) { SetAvailabilityZoneInformation(std::move(value)); return *this;}

    /**
     * <p> A list of <code>AvailabilityZoneInfo</code> for the domain.</p>
     */
    inline EnvironmentInfo& AddAvailabilityZoneInformation(const AvailabilityZoneInfo& value) { m_availabilityZoneInformationHasBeenSet = true; m_availabilityZoneInformation.push_back(value); return *this; }

    /**
     * <p> A list of <code>AvailabilityZoneInfo</code> for the domain.</p>
     */
    inline EnvironmentInfo& AddAvailabilityZoneInformation(AvailabilityZoneInfo&& value) { m_availabilityZoneInformationHasBeenSet = true; m_availabilityZoneInformation.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AvailabilityZoneInfo> m_availabilityZoneInformation;
    bool m_availabilityZoneInformationHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
