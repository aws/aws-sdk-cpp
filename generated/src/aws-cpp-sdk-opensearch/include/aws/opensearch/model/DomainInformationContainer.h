/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/AWSDomainInformation.h>
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
   * <p>Container for information about an OpenSearch Service domain.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DomainInformationContainer">AWS
   * API Reference</a></p>
   */
  class DomainInformationContainer
  {
  public:
    AWS_OPENSEARCHSERVICE_API DomainInformationContainer() = default;
    AWS_OPENSEARCHSERVICE_API DomainInformationContainer(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API DomainInformationContainer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about an Amazon OpenSearch Service domain.</p>
     */
    inline const AWSDomainInformation& GetAWSDomainInformation() const { return m_aWSDomainInformation; }
    inline bool AWSDomainInformationHasBeenSet() const { return m_aWSDomainInformationHasBeenSet; }
    template<typename AWSDomainInformationT = AWSDomainInformation>
    void SetAWSDomainInformation(AWSDomainInformationT&& value) { m_aWSDomainInformationHasBeenSet = true; m_aWSDomainInformation = std::forward<AWSDomainInformationT>(value); }
    template<typename AWSDomainInformationT = AWSDomainInformation>
    DomainInformationContainer& WithAWSDomainInformation(AWSDomainInformationT&& value) { SetAWSDomainInformation(std::forward<AWSDomainInformationT>(value)); return *this;}
    ///@}
  private:

    AWSDomainInformation m_aWSDomainInformation;
    bool m_aWSDomainInformationHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
