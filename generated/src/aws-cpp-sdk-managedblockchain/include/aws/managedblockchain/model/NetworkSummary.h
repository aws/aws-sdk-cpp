/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/Framework.h>
#include <aws/managedblockchain/model/NetworkStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace ManagedBlockchain
{
namespace Model
{

  /**
   * <p>A summary of network configuration properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/NetworkSummary">AWS
   * API Reference</a></p>
   */
  class NetworkSummary
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API NetworkSummary();
    AWS_MANAGEDBLOCKCHAIN_API NetworkSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API NetworkSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the network.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier of the network.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier of the network.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier of the network.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier of the network.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier of the network.</p>
     */
    inline NetworkSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier of the network.</p>
     */
    inline NetworkSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the network.</p>
     */
    inline NetworkSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the network.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the network.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the network.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the network.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the network.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the network.</p>
     */
    inline NetworkSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the network.</p>
     */
    inline NetworkSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the network.</p>
     */
    inline NetworkSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An optional description of the network.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An optional description of the network.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>An optional description of the network.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An optional description of the network.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An optional description of the network.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An optional description of the network.</p>
     */
    inline NetworkSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An optional description of the network.</p>
     */
    inline NetworkSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description of the network.</p>
     */
    inline NetworkSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The blockchain framework that the network uses.</p>
     */
    inline const Framework& GetFramework() const{ return m_framework; }

    /**
     * <p>The blockchain framework that the network uses.</p>
     */
    inline bool FrameworkHasBeenSet() const { return m_frameworkHasBeenSet; }

    /**
     * <p>The blockchain framework that the network uses.</p>
     */
    inline void SetFramework(const Framework& value) { m_frameworkHasBeenSet = true; m_framework = value; }

    /**
     * <p>The blockchain framework that the network uses.</p>
     */
    inline void SetFramework(Framework&& value) { m_frameworkHasBeenSet = true; m_framework = std::move(value); }

    /**
     * <p>The blockchain framework that the network uses.</p>
     */
    inline NetworkSummary& WithFramework(const Framework& value) { SetFramework(value); return *this;}

    /**
     * <p>The blockchain framework that the network uses.</p>
     */
    inline NetworkSummary& WithFramework(Framework&& value) { SetFramework(std::move(value)); return *this;}


    /**
     * <p>The version of the blockchain framework that the network uses.</p>
     */
    inline const Aws::String& GetFrameworkVersion() const{ return m_frameworkVersion; }

    /**
     * <p>The version of the blockchain framework that the network uses.</p>
     */
    inline bool FrameworkVersionHasBeenSet() const { return m_frameworkVersionHasBeenSet; }

    /**
     * <p>The version of the blockchain framework that the network uses.</p>
     */
    inline void SetFrameworkVersion(const Aws::String& value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion = value; }

    /**
     * <p>The version of the blockchain framework that the network uses.</p>
     */
    inline void SetFrameworkVersion(Aws::String&& value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion = std::move(value); }

    /**
     * <p>The version of the blockchain framework that the network uses.</p>
     */
    inline void SetFrameworkVersion(const char* value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion.assign(value); }

    /**
     * <p>The version of the blockchain framework that the network uses.</p>
     */
    inline NetworkSummary& WithFrameworkVersion(const Aws::String& value) { SetFrameworkVersion(value); return *this;}

    /**
     * <p>The version of the blockchain framework that the network uses.</p>
     */
    inline NetworkSummary& WithFrameworkVersion(Aws::String&& value) { SetFrameworkVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the blockchain framework that the network uses.</p>
     */
    inline NetworkSummary& WithFrameworkVersion(const char* value) { SetFrameworkVersion(value); return *this;}


    /**
     * <p>The current status of the network.</p>
     */
    inline const NetworkStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the network.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the network.</p>
     */
    inline void SetStatus(const NetworkStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the network.</p>
     */
    inline void SetStatus(NetworkStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the network.</p>
     */
    inline NetworkSummary& WithStatus(const NetworkStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the network.</p>
     */
    inline NetworkSummary& WithStatus(NetworkStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time that the network was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time that the network was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date and time that the network was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time that the network was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date and time that the network was created.</p>
     */
    inline NetworkSummary& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time that the network was created.</p>
     */
    inline NetworkSummary& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the network. For more information about
     * ARNs and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network. For more information about
     * ARNs and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network. For more information about
     * ARNs and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network. For more information about
     * ARNs and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the network. For more information about
     * ARNs and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the network. For more information about
     * ARNs and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline NetworkSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network. For more information about
     * ARNs and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline NetworkSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network. For more information about
     * ARNs and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline NetworkSummary& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Framework m_framework;
    bool m_frameworkHasBeenSet = false;

    Aws::String m_frameworkVersion;
    bool m_frameworkVersionHasBeenSet = false;

    NetworkStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
