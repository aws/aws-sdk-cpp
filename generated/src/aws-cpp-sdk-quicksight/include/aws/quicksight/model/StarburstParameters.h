/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/StarburstProductType.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The parameters that are required to connect to a Starburst data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/StarburstParameters">AWS
   * API Reference</a></p>
   */
  class StarburstParameters
  {
  public:
    AWS_QUICKSIGHT_API StarburstParameters();
    AWS_QUICKSIGHT_API StarburstParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API StarburstParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The host name of the Starburst data source.</p>
     */
    inline const Aws::String& GetHost() const{ return m_host; }

    /**
     * <p>The host name of the Starburst data source.</p>
     */
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }

    /**
     * <p>The host name of the Starburst data source.</p>
     */
    inline void SetHost(const Aws::String& value) { m_hostHasBeenSet = true; m_host = value; }

    /**
     * <p>The host name of the Starburst data source.</p>
     */
    inline void SetHost(Aws::String&& value) { m_hostHasBeenSet = true; m_host = std::move(value); }

    /**
     * <p>The host name of the Starburst data source.</p>
     */
    inline void SetHost(const char* value) { m_hostHasBeenSet = true; m_host.assign(value); }

    /**
     * <p>The host name of the Starburst data source.</p>
     */
    inline StarburstParameters& WithHost(const Aws::String& value) { SetHost(value); return *this;}

    /**
     * <p>The host name of the Starburst data source.</p>
     */
    inline StarburstParameters& WithHost(Aws::String&& value) { SetHost(std::move(value)); return *this;}

    /**
     * <p>The host name of the Starburst data source.</p>
     */
    inline StarburstParameters& WithHost(const char* value) { SetHost(value); return *this;}


    /**
     * <p>The port for the Starburst data source.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port for the Starburst data source.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port for the Starburst data source.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port for the Starburst data source.</p>
     */
    inline StarburstParameters& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The catalog name for the Starburst data source.</p>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }

    /**
     * <p>The catalog name for the Starburst data source.</p>
     */
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }

    /**
     * <p>The catalog name for the Starburst data source.</p>
     */
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }

    /**
     * <p>The catalog name for the Starburst data source.</p>
     */
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }

    /**
     * <p>The catalog name for the Starburst data source.</p>
     */
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }

    /**
     * <p>The catalog name for the Starburst data source.</p>
     */
    inline StarburstParameters& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}

    /**
     * <p>The catalog name for the Starburst data source.</p>
     */
    inline StarburstParameters& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}

    /**
     * <p>The catalog name for the Starburst data source.</p>
     */
    inline StarburstParameters& WithCatalog(const char* value) { SetCatalog(value); return *this;}


    /**
     * <p>The product type for the Starburst data source.</p>
     */
    inline const StarburstProductType& GetProductType() const{ return m_productType; }

    /**
     * <p>The product type for the Starburst data source.</p>
     */
    inline bool ProductTypeHasBeenSet() const { return m_productTypeHasBeenSet; }

    /**
     * <p>The product type for the Starburst data source.</p>
     */
    inline void SetProductType(const StarburstProductType& value) { m_productTypeHasBeenSet = true; m_productType = value; }

    /**
     * <p>The product type for the Starburst data source.</p>
     */
    inline void SetProductType(StarburstProductType&& value) { m_productTypeHasBeenSet = true; m_productType = std::move(value); }

    /**
     * <p>The product type for the Starburst data source.</p>
     */
    inline StarburstParameters& WithProductType(const StarburstProductType& value) { SetProductType(value); return *this;}

    /**
     * <p>The product type for the Starburst data source.</p>
     */
    inline StarburstParameters& WithProductType(StarburstProductType&& value) { SetProductType(std::move(value)); return *this;}

  private:

    Aws::String m_host;
    bool m_hostHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    StarburstProductType m_productType;
    bool m_productTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
