/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Information about the patches to use to update the managed nodes, including
   * target operating systems and source repository. Applies to Linux managed nodes
   * only.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PatchSource">AWS API
   * Reference</a></p>
   */
  class PatchSource
  {
  public:
    AWS_SSM_API PatchSource() = default;
    AWS_SSM_API PatchSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API PatchSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name specified to identify the patch source.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PatchSource& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific operating system versions a patch repository applies to, such as
     * "Ubuntu16.04", "AmazonLinux2016.09", "RedhatEnterpriseLinux7.2" or "Suse12.7".
     * For lists of supported product values, see <a>PatchFilter</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProducts() const { return m_products; }
    inline bool ProductsHasBeenSet() const { return m_productsHasBeenSet; }
    template<typename ProductsT = Aws::Vector<Aws::String>>
    void SetProducts(ProductsT&& value) { m_productsHasBeenSet = true; m_products = std::forward<ProductsT>(value); }
    template<typename ProductsT = Aws::Vector<Aws::String>>
    PatchSource& WithProducts(ProductsT&& value) { SetProducts(std::forward<ProductsT>(value)); return *this;}
    template<typename ProductsT = Aws::String>
    PatchSource& AddProducts(ProductsT&& value) { m_productsHasBeenSet = true; m_products.emplace_back(std::forward<ProductsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value of the repo configuration.</p> <p> <b>Example for yum
     * repositories</b> </p> <p> <code>[main]</code> </p> <p>
     * <code>name=MyCustomRepository</code> </p> <p>
     * <code>baseurl=https://my-custom-repository</code> </p> <p>
     * <code>enabled=1</code> </p> <p>For information about other options available for
     * your yum repository configuration, see <a
     * href="https://man7.org/linux/man-pages/man5/dnf.conf.5.html">dnf.conf(5)</a> on
     * the <i>man7.org</i> website.</p> <p> <b>Examples for Ubuntu Server and Debian
     * Server</b> </p> <p> <code>deb http://security.ubuntu.com/ubuntu jammy
     * main</code> </p> <p> <code>deb https://site.example.com/debian distribution
     * component1 component2 component3</code> </p> <p>Repo information for Ubuntu
     * Server repositories must be specifed in a single line. For more examples and
     * information, see <a
     * href="https://manpages.ubuntu.com/manpages/jammy/man5/sources.list.5.html">jammy
     * (5) sources.list.5.gz</a> on the <i>Ubuntu Server Manuals</i> website and <a
     * href="https://wiki.debian.org/SourcesList#sources.list_format">sources.list
     * format</a> on the <i>Debian Wiki</i>.</p>
     */
    inline const Aws::String& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = Aws::String>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = Aws::String>
    PatchSource& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_products;
    bool m_productsHasBeenSet = false;

    Aws::String m_configuration;
    bool m_configurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
