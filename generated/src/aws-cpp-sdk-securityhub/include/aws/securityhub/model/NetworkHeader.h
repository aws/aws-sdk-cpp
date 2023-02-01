/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/NetworkPathComponentDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Details about a network path component that occurs before or after the
   * current component.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/NetworkHeader">AWS
   * API Reference</a></p>
   */
  class NetworkHeader
  {
  public:
    AWS_SECURITYHUB_API NetworkHeader();
    AWS_SECURITYHUB_API NetworkHeader(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API NetworkHeader& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The protocol used for the component.</p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol used for the component.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol used for the component.</p>
     */
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol used for the component.</p>
     */
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol used for the component.</p>
     */
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }

    /**
     * <p>The protocol used for the component.</p>
     */
    inline NetworkHeader& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol used for the component.</p>
     */
    inline NetworkHeader& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}

    /**
     * <p>The protocol used for the component.</p>
     */
    inline NetworkHeader& WithProtocol(const char* value) { SetProtocol(value); return *this;}


    /**
     * <p>Information about the destination of the component.</p>
     */
    inline const NetworkPathComponentDetails& GetDestination() const{ return m_destination; }

    /**
     * <p>Information about the destination of the component.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>Information about the destination of the component.</p>
     */
    inline void SetDestination(const NetworkPathComponentDetails& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>Information about the destination of the component.</p>
     */
    inline void SetDestination(NetworkPathComponentDetails&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>Information about the destination of the component.</p>
     */
    inline NetworkHeader& WithDestination(const NetworkPathComponentDetails& value) { SetDestination(value); return *this;}

    /**
     * <p>Information about the destination of the component.</p>
     */
    inline NetworkHeader& WithDestination(NetworkPathComponentDetails&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * <p>Information about the origin of the component.</p>
     */
    inline const NetworkPathComponentDetails& GetSource() const{ return m_source; }

    /**
     * <p>Information about the origin of the component.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>Information about the origin of the component.</p>
     */
    inline void SetSource(const NetworkPathComponentDetails& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>Information about the origin of the component.</p>
     */
    inline void SetSource(NetworkPathComponentDetails&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>Information about the origin of the component.</p>
     */
    inline NetworkHeader& WithSource(const NetworkPathComponentDetails& value) { SetSource(value); return *this;}

    /**
     * <p>Information about the origin of the component.</p>
     */
    inline NetworkHeader& WithSource(NetworkPathComponentDetails&& value) { SetSource(std::move(value)); return *this;}

  private:

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    NetworkPathComponentDetails m_destination;
    bool m_destinationHasBeenSet = false;

    NetworkPathComponentDetails m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
