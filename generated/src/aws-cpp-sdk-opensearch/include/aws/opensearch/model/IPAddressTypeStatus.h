/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/IPAddressType.h>
#include <aws/opensearch/model/OptionStatus.h>
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
   * <p>The IP address type status for the domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/IPAddressTypeStatus">AWS
   * API Reference</a></p>
   */
  class IPAddressTypeStatus
  {
  public:
    AWS_OPENSEARCHSERVICE_API IPAddressTypeStatus();
    AWS_OPENSEARCHSERVICE_API IPAddressTypeStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API IPAddressTypeStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IP address options for the domain.</p>
     */
    inline const IPAddressType& GetOptions() const{ return m_options; }

    /**
     * <p>The IP address options for the domain.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>The IP address options for the domain.</p>
     */
    inline void SetOptions(const IPAddressType& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The IP address options for the domain.</p>
     */
    inline void SetOptions(IPAddressType&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>The IP address options for the domain.</p>
     */
    inline IPAddressTypeStatus& WithOptions(const IPAddressType& value) { SetOptions(value); return *this;}

    /**
     * <p>The IP address options for the domain.</p>
     */
    inline IPAddressTypeStatus& WithOptions(IPAddressType&& value) { SetOptions(std::move(value)); return *this;}


    
    inline const OptionStatus& GetStatus() const{ return m_status; }

    
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    
    inline IPAddressTypeStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}

    
    inline IPAddressTypeStatus& WithStatus(OptionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    IPAddressType m_options;
    bool m_optionsHasBeenSet = false;

    OptionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
