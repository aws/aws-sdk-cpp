/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/ZeroETLIntegrationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/redshift/model/IntegrationError.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>The content of an inbound integration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/InboundIntegration">AWS
   * API Reference</a></p>
   */
  class InboundIntegration
  {
  public:
    AWS_REDSHIFT_API InboundIntegration();
    AWS_REDSHIFT_API InboundIntegration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API InboundIntegration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Resource Name (ARN) of an inbound integration.</p>
     */
    inline const Aws::String& GetIntegrationArn() const{ return m_integrationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an inbound integration.</p>
     */
    inline bool IntegrationArnHasBeenSet() const { return m_integrationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an inbound integration.</p>
     */
    inline void SetIntegrationArn(const Aws::String& value) { m_integrationArnHasBeenSet = true; m_integrationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an inbound integration.</p>
     */
    inline void SetIntegrationArn(Aws::String&& value) { m_integrationArnHasBeenSet = true; m_integrationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an inbound integration.</p>
     */
    inline void SetIntegrationArn(const char* value) { m_integrationArnHasBeenSet = true; m_integrationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an inbound integration.</p>
     */
    inline InboundIntegration& WithIntegrationArn(const Aws::String& value) { SetIntegrationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an inbound integration.</p>
     */
    inline InboundIntegration& WithIntegrationArn(Aws::String&& value) { SetIntegrationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an inbound integration.</p>
     */
    inline InboundIntegration& WithIntegrationArn(const char* value) { SetIntegrationArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the source of an inbound integration.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source of an inbound integration.</p>
     */
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source of an inbound integration.</p>
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source of an inbound integration.</p>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source of an inbound integration.</p>
     */
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source of an inbound integration.</p>
     */
    inline InboundIntegration& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source of an inbound integration.</p>
     */
    inline InboundIntegration& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source of an inbound integration.</p>
     */
    inline InboundIntegration& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the target of an inbound integration.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target of an inbound integration.</p>
     */
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target of an inbound integration.</p>
     */
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target of an inbound integration.</p>
     */
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the target of an inbound integration.</p>
     */
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the target of an inbound integration.</p>
     */
    inline InboundIntegration& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target of an inbound integration.</p>
     */
    inline InboundIntegration& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target of an inbound integration.</p>
     */
    inline InboundIntegration& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}


    /**
     * <p>The status of an inbound integration.</p>
     */
    inline const ZeroETLIntegrationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of an inbound integration.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of an inbound integration.</p>
     */
    inline void SetStatus(const ZeroETLIntegrationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of an inbound integration.</p>
     */
    inline void SetStatus(ZeroETLIntegrationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of an inbound integration.</p>
     */
    inline InboundIntegration& WithStatus(const ZeroETLIntegrationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of an inbound integration.</p>
     */
    inline InboundIntegration& WithStatus(ZeroETLIntegrationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The outstanding errors of an inbound integration. Each item is an
     * "IntegrationError". This is null if there is no error.</p>
     */
    inline const Aws::Vector<IntegrationError>& GetErrors() const{ return m_errors; }

    /**
     * <p>The outstanding errors of an inbound integration. Each item is an
     * "IntegrationError". This is null if there is no error.</p>
     */
    inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }

    /**
     * <p>The outstanding errors of an inbound integration. Each item is an
     * "IntegrationError". This is null if there is no error.</p>
     */
    inline void SetErrors(const Aws::Vector<IntegrationError>& value) { m_errorsHasBeenSet = true; m_errors = value; }

    /**
     * <p>The outstanding errors of an inbound integration. Each item is an
     * "IntegrationError". This is null if there is no error.</p>
     */
    inline void SetErrors(Aws::Vector<IntegrationError>&& value) { m_errorsHasBeenSet = true; m_errors = std::move(value); }

    /**
     * <p>The outstanding errors of an inbound integration. Each item is an
     * "IntegrationError". This is null if there is no error.</p>
     */
    inline InboundIntegration& WithErrors(const Aws::Vector<IntegrationError>& value) { SetErrors(value); return *this;}

    /**
     * <p>The outstanding errors of an inbound integration. Each item is an
     * "IntegrationError". This is null if there is no error.</p>
     */
    inline InboundIntegration& WithErrors(Aws::Vector<IntegrationError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>The outstanding errors of an inbound integration. Each item is an
     * "IntegrationError". This is null if there is no error.</p>
     */
    inline InboundIntegration& AddErrors(const IntegrationError& value) { m_errorsHasBeenSet = true; m_errors.push_back(value); return *this; }

    /**
     * <p>The outstanding errors of an inbound integration. Each item is an
     * "IntegrationError". This is null if there is no error.</p>
     */
    inline InboundIntegration& AddErrors(IntegrationError&& value) { m_errorsHasBeenSet = true; m_errors.push_back(std::move(value)); return *this; }


    /**
     * <p>The creation time of an inbound integration.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The creation time of an inbound integration.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The creation time of an inbound integration.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The creation time of an inbound integration.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The creation time of an inbound integration.</p>
     */
    inline InboundIntegration& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The creation time of an inbound integration.</p>
     */
    inline InboundIntegration& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}

  private:

    Aws::String m_integrationArn;
    bool m_integrationArnHasBeenSet = false;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    ZeroETLIntegrationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<IntegrationError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
